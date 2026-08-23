/* Display and print a basic structure variable program: updated the domain and context,
 macro name and value, variable name, print formatting for weather report.*/

#include <stdio.h>
#include <string.h>

#define CITY_LEN 30

int main(void)
{
    /* Anonymous struct declaring variable weather1 */
    struct {
        int humidity_percent;
        char city_name[CITY_LEN + 1];
        double temperature_celsius;
    } weather1;

    /* Assigning values to weather1 members */
    weather1.humidity_percent = 78;
    strcpy(weather1.city_name, "San Francisco");
    weather1.temperature_celsius = 18.4;

    /* Printing the contents of weather1 */
    printf("=== Weather Report ===\n");
    printf("City Name:   %s\n", weather1.city_name);
    printf("Temperature: %.1f°C\n", weather1.temperature_celsius);
    printf("Humidity:    %d%%\n", weather1.humidity_percent);

    return 0;
}