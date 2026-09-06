/* Display and print a basic structure variable program: add train pass record example using anonymous struct.*/

#include <stdio.h>
#include <string.h>

#define EXHIBIT_LEN 40

int main(void)
{
    /* Anonymous struct declaring variable artwork1 */
    struct {
        int creation_year;
        char title[EXHIBIT_LEN + 1];
        double estimated_value_m;
    } artwork1;

    /* Assigning values to artwork1 members */
    artwork1.creation_year = 1889;
    strcpy(artwork1.title, "The Starry Night");
    artwork1.estimated_value_m = 100.0;

    /* Printing the contents of artwork1 */
    printf("=== Art Museum Catalog ===\n");
    printf("Title:           %s\n", artwork1.title);
    printf("Year Created:    %d\n", artwork1.creation_year);
    printf("Estimated Value: $%.1fM\n", artwork1.estimated_value_m);

    return 0;
}