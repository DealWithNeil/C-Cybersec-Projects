/*Program that accepts a date from a user*/

#include <stdio.h>

int main (void) {

     int day, month, year;

     printf("Enter a date (mm/dd/yyyy):)");
     scanf("%d/%d/%d", &month, &day, &year);

     printf("You entered: %02d/%02d/%04d\n", month, day, year);

     return 0;
}