#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num_students = 4;

    /* 
     * Allocate space for 4 float elements, zero-initializing all bits.
     * Each score starts safely at 0.0 without any garbage values.
     */
    float *grades = calloc(num_students, sizeof(float));

    /* Always check if calloc returned NULL */
    if (grades == NULL) {
        printf("Error: Could not allocate memory for grades.\n");
        return 1;
    }

    printf("=== Initial Values After calloc ===\n");
    for (int i = 0; i < num_students; i++) {
        printf("grades[%d] = %.2f\n", i, grades[i]);
    }

    /* Assign values to specific indices */
    grades[0] = 95.5f;
    grades[1] = 88.0f;

    printf("\n=== Values After Selective Assignment ===\n");
    for (int i = 0; i < num_students; i++) {
        printf("grades[%d] = %.2f\n", i, grades[i]);
    }

    /* Free allocated memory and clear pointer */
    free(grades);
    grades = NULL;

    return 0;
}