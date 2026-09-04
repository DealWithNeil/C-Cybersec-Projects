/* Display and print a basic structure variable program: add package shipment example using anonymous struct.*/

#include <stdio.h>
#include <string.h>

#define HOTEL_LEN 40

int main(void)
{
    /* Anonymous struct declaring variable booking1 */
    struct {
        int nights_stayed;
        char hotel_name[HOTEL_LEN + 1];
        double total_cost;
    } booking1;

    /* Assigning values to booking1 members */
    booking1.nights_stayed = 5;
    strcpy(booking1.hotel_name, "Grand Hyatt Regency");
    booking1.total_cost = 1125.50;

    /* Printing the contents of booking1 */
    printf("=== Hotel Reservation Details ===\n");
    printf("Hotel Name: %s\n", booking1.hotel_name);
    printf("Duration:   %d nights\n", booking1.nights_stayed);
    printf("Total Cost: $%.2f\n", booking1.total_cost);

    return 0;
}