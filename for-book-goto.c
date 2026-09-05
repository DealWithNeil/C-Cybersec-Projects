/* Display and print a basic structure variable program: add IoT sensor telemetry example using anonymous struct.*/

#include <stdio.h>
#include <string.h>

#define STATION_LEN 30

int main(void)
{
    /* Anonymous struct declaring variable transit1 */
    struct {
        int platform_number;
        char station_name[STATION_LEN + 1];
        double ticket_fare;
    } transit1;

    /* Assigning values to transit1 members */
    transit1.platform_number = 4;
    strcpy(transit1.station_name, "Grand Central Terminal");
    transit1.ticket_fare = 6.75;

    /* Printing the contents of transit1 */
    printf("=== Train Pass Record ===\n");
    printf("Destination: %s\n", transit1.station_name);
    printf("Platform:    #%d\n", transit1.platform_number);
    printf("Fare:        $%.2f\n", transit1.ticket_fare);

    return 0;
}