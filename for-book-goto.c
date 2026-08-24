/* Display and print a basic structure variable program: updated the domain and context,
 macro name and value, variable name, print formatting for weather report.*/

#include <stdio.h>
#include <string.h>

#define PACK_LEN 25

int main(void)
{
    /* Anonymous struct declaring variable subscription1 */
    struct {
        int duration_months;
        char package_name[PACK_LEN + 1];
        double monthly_fee;
    } subscription1;

    /* Assigning values to subscription1 members */
    subscription1.duration_months = 12;
    strcpy(subscription1.package_name, "Premium Family Tier");
    subscription1.monthly_fee = 19.99;

    /* Printing the contents of subscription1 */
    printf("=== Subscription Details ===\n");
    printf("Package Name: %s\n", subscription1.package_name);
    printf("Duration:     %d months\n", subscription1.duration_months);
    printf("Monthly Fee:  $%.2f/mo\n", subscription1.monthly_fee);

    return 0;
}