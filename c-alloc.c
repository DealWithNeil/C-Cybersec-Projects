#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Allocate space for 3 integers, set to 0 */
    int *nums = calloc(3, sizeof(int));

    /* Print default zero values */
    printf("nums[0] = %d\n", nums[0]);
    printf("nums[1] = %d\n", nums[1]);
    printf("nums[2] = %d\n", nums[2]);

    /* Free memory */
    free(nums);

    return 0;
}