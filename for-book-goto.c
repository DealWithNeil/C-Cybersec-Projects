/* Display and print a basic structure variable program:domain and context, macro name and value, variable name, print formatting.*/

#include <stdio.h>
#include <string.h>

#define COURSE_LEN 35

int main(void)
{
    /* Anonymous struct declaring variable course1 */
    struct {
        int course_code;
        char course_name[COURSE_LEN + 1];
        double credit_hours;
    } course1;

    /* Assigning values to course1 members */
    course1.course_code = 101;
    strcpy(course1.course_name, "Data Structures & Algorithms");
    course1.credit_hours = 3.5;

    /* Printing the contents of course1 */
    printf("=== Academic Course Details ===\n");
    printf("Course Code:  CS%d\n", course1.course_code);
    printf("Course Name:  %s\n", course1.course_name);
    printf("Credit Hours: %.1f hrs\n", course1.credit_hours);

    return 0;
}