/* Display and print a basic structure variable program: add book catalog example using anonymous struct.*/

#include <stdio.h>
#include <string.h>

#define PLANET_LEN 30

int main(void)
{
    /* Anonymous struct declaring variable body1 */
    struct {
        int moon_count;
        char planet_name[PLANET_LEN + 1];
        double distance_from_sun_au;
    } body1;

    /* Assigning values to body1 members */
    body1.moon_count = 95;
    strcpy(body1.planet_name, "Jupiter");
    body1.distance_from_sun_au = 5.20;

    /* Printing the contents of body1 */
    printf("=== Astronomical Data ===\n");
    printf("Planet Name: %s\n", body1.planet_name);
    printf("Moons:       %d\n", body1.moon_count);
    printf("Distance:    %.2f AU\n", body1.distance_from_sun_au);

    return 0;
}