/* Display and print a basic structure variable program: Update domain from weather report to subscription tier,
Rename fields to duration_months, package_name, and monthly_fee.*/

#include <stdio.h>
#include <string.h>

#define EVENT_LEN 40

int main(void)
{
    /* Anonymous struct declaring variable conference1 */
    struct {
        int attendee_count;
        char event_name[EVENT_LEN + 1];
        double ticket_cost;
    } conference1;

    /* Assigning values to conference1 members */
    conference1.attendee_count = 1500;
    strcpy(conference1.event_name, "Tech Summit 2026");
    conference1.ticket_cost = 299.50;

    /* Printing the contents of conference1 */
    printf("=== Conference Information ===\n");
    printf("Event Name:     %s\n", conference1.event_name);
    printf("Expected Group: %d attendees\n", conference1.attendee_count);
    printf("Ticket Cost:    $%.2f\n", conference1.ticket_cost);

    return 0;
}