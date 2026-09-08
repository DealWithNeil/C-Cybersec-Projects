/* Display and print a basic structure variable program: add agricultural harvest log example using anonymous struct.*/

#include <stdio.h>
#include <string.h>

#define CROP_LEN 30

int main(void)
{
    /* Anonymous struct declaring variable harvest1 */
    struct {
        int harvest_days;
        char crop_type[CROP_LEN + 1];
        double yield_tons;
    } harvest1;

    /* Assigning values to harvest1 members */
    harvest1.harvest_days = 90;
    strcpy(harvest1.crop_type, "Heirloom Yellow Corn");
    harvest1.yield_tons = 14.25;

    /* Printing the contents of harvest1 */
    printf("=== Farm Harvest Log ===\n");
    printf("Crop Type:    %s\n", harvest1.crop_type);
    printf("Growth Cycle: %d days\n", harvest1.harvest_days);
    printf("Total Yield:  %.2f tons\n", harvest1.yield_tons);

    return 0;
}