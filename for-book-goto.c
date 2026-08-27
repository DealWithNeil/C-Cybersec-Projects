/* Display and print a basic structure variable program: add restaurant order example using anonymous struct.*/

#include <stdio.h>
#include <string.h>

#define ASSET_LEN 30

int main(void)
{
    /* Anonymous struct declaring variable gadget1 */
    struct {
        int warranty_months;
        char asset_tag[ASSET_LEN + 1];
        double replacement_cost;
    } gadget1;

    /* Assigning values to gadget1 members */
    gadget1.warranty_months = 24;
    strcpy(gadget1.asset_tag, "Dell XPS 15 Laptop");
    gadget1.replacement_cost = 1799.99;

    /* Printing the contents of gadget1 */
    printf("=== IT Asset Details ===\n");
    printf("Asset Tag:    %s\n", gadget1.asset_tag);
    printf("Warranty:     %d months\n", gadget1.warranty_months);
    printf("Value:        $%.2f\n", gadget1.replacement_cost);

    return 0;
}