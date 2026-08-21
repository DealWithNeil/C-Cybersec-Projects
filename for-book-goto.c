/* Display and print a basic structure variable program:domain and context, macro name and value, variable name, print formatting.*/

#include <stdio.h>
#include <string.h>

#define ARTIST_LEN 40

int main(void)
{
    /* Anonymous struct declaring variable track1 */
    struct {
        int track_number;
        char artist[ARTIST_LEN + 1];
        double duration_minutes;
    } track1;

    /* Assigning values to track1 members */
    track1.track_number = 4;
    strcpy(track1.artist, "Miles Davis");
    track1.duration_minutes = 9.37;

    /* Printing the contents of track1 */
    printf("=== Music Track Details ===\n");
    printf("Track Number: %d\n", track1.track_number);
    printf("Artist:       %s\n", track1.artist);
    printf("Duration:     %.2f mins\n", track1.duration_minutes);

    return 0;
}