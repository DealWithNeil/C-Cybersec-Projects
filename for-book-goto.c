/* Display and print a basic structure variable program: add IoT sensor telemetry example using anonymous struct.*/

#include <stdio.h>
#include <string.h>

#define SENSOR_LEN 35

int main(void)
{
    /* Anonymous struct declaring variable read1 */
    struct {
        int sensor_id;
        char sensor_type[SENSOR_LEN + 1];
        double pressure_psi;
    } read1;

    /* Assigning values to read1 members */
    read1.sensor_id = 402;
    strcpy(read1.sensor_type, "Pneumatic Pressure Transducer");
    read1.pressure_psi = 45.85;

    /* Printing the contents of read1 */
    printf("=== IoT Sensor Telemetry ===\n");
    printf("Sensor ID:   #%d\n", read1.sensor_id);
    printf("Type:        %s\n", read1.sensor_type);
    printf("Reading:     %.2f PSI\n", read1.pressure_psi);

    return 0;
}