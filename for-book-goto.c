/* Display and print a basic structure variable program: direct member access and string memory copy.*/

#include <stdio.h>
#include <string.h>

#define DEST_LEN 40

int main(void)
{
    /* Anonymous struct declaring variable flight1 */
    struct {
        int flight_number;
        char destination[DEST_LEN + 1];
        double ticket_price;
    } flight1;

    /* Assigning values to flight1 members */
    flight1.flight_number = 742;
    strcpy(flight1.destination, "Tokyo (Haneda)");
    flight1.ticket_price = 680.75;

    /* Printing the contents of flight1 */
    printf("=== Flight Details ===\n");
    printf("Flight Number: PR%d\n", flight1.flight_number);
    printf("Destination:   %s\n", flight1.destination);
    printf("Ticket Price:  $%.2f\n", flight1.ticket_price);

    return 0;
}