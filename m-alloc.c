#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

#define HEAP_SIZE 1024
#define ALIGNMENT 8

#define ALIGN(size) (((size) + (ALIGNMENT - 1)) & ~(ALIGNMENT - 1))

typedef struct Header {
    size_t size;          /* Size of the block (excluding header) */
    bool is_free;         /* Free status flag */
    struct Header *next;  /* Pointer to next block in heap */
} Header;

/* Fixed memory arena to simulate system heap */
static uint8_t heap_arena[HEAP_SIZE];
static Header *free_list_head = NULL;
static bool arena_initialized = false;

/* Initialize the heap arena with a single large free block */
void custom_allocator_init(void)
{
    free_list_head = (Header *)heap_arena;
    free_list_head->size = HEAP_SIZE - ALIGN(sizeof(Header));
    free_list_head->is_free = true;
    free_list_head->next = NULL;
    arena_initialized = true;
}

void *my_malloc(size_t size)
{
    if (size == 0) return NULL;
    if (!arena_initialized) custom_allocator_init();

    size_t aligned_size = ALIGN(size);
    Header *curr = free_list_head;

    while (curr != NULL) {
        if (curr->is_free && curr->size >= aligned_size) {
            /* Check if block can be split */
            size_t min_split_size = ALIGN(sizeof(Header)) + ALIGNMENT;
            if (curr->size >= aligned_size + min_split_size) {
                Header *new_block = (Header *)((uint8_t *)(curr + 1) + aligned_size);
                new_block->size = curr->size - aligned_size - ALIGN(sizeof(Header));
                new_block->is_free = true;
                new_block->next = curr->next;

                curr->size = aligned_size;
                curr->next = new_block;
            }

            curr->is_free = false;
            return (void *)(curr + 1); /* Return payload pointer past header */
        }
        curr = curr->next;
    }

    return NULL; /* Out of memory */
}

/* Free block and coalesce adjacent free blocks */
void my_free(void *ptr)
{
    if (ptr == NULL) return;

    Header *header = ((Header *)ptr) - 1;
    header->is_free = true;

    /* Coalesce adjacent free blocks */
    Header *curr = free_list_head;
    while (curr != NULL && curr->next != NULL) {
        if (curr->is_free && curr->next->is_free) {
            curr->size += ALIGN(sizeof(Header)) + curr->next->size;
            curr->next = curr->next->next;
        } else {
            curr = curr->next;
        }
    }
}

int main(void)
{
    printf("=== Custom First-Fit Memory Allocator Demo ===\n\n");

    /* Allocation 1: Integer buffer */
    int *numbers = (int *)my_malloc(5 * sizeof(int));
    if (numbers) {
        for (int i = 0; i < 5; i++) numbers[i] = (i + 1) * 100;
        printf("Allocated 'numbers' [5 x int] at %p\n", (void *)numbers);
    }

    /* Allocation 2: Dynamic String */
    char *label = (char *)my_malloc(32 * sizeof(char));
    if (label) {
        strcpy(label, "Custom Heap Memory Arena");
        printf("Allocated 'label' [32 x char] at %p -> \"%s\"\n", (void *)label, label);
    }

    /* Free first allocation to create a free hole in the heap */
    printf("\nFreeing 'numbers'...\n");
    my_free(numbers);

    /* Allocation 3: Smaller request that fits in the freed hole (Splitting test) */
    double *ratio = (double *)my_malloc(sizeof(double));
    if (ratio) {
        *ratio = 3.14159;
        printf("Allocated 'ratio' [1 x double] at %p -> %.5f\n", (void *)ratio, *ratio);
    }

    /* Clean up remaining allocations */
    my_free(label);
    my_free(ratio);
    printf("\nAll dynamic memory successfully freed and coalesced.\n");

    return 0;
}