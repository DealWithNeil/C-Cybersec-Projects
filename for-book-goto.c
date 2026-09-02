/* Display and print a basic structure variable program: add package shipment example using anonymous struct.*/

#include <stdio.h>
#include <string.h>

#define CARRIER_LEN 30

int main(void)
{
    /* Anonymous struct declaring variable shipment1 */
    struct {
        int delivery_days;
        char carrier_name[CARRIER_LEN + 1];
        double weight_lbs;
    } shipment1;

    /* Assigning values to shipment1 members */
    shipment1.delivery_days = 3;
    strcpy(shipment1.carrier_name, "FedEx Express");
    shipment1.weight_lbs = 12.4;

    /* Printing the contents of shipment1 */
    printf("=== Package Shipment Record ===\n");
    printf("Carrier:       %s\n", shipment1.carrier_name);
    printf("Weight:        %.1f lbs\n", shipment1.weight_lbs);
    printf("Delivery Time: %d days\n", shipment1.delivery_days);

    return 0;
}