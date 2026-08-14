/* Display and print a basic structure variable program using anonymous structures.*/

#include <stdio.h>

#include <stdio.h>
#include <string.h>

#define MAX_NAME_LEN 50

int main(void)
{
    /* Anonymous struct definition declaring two variables: emp1 and emp2 */
    struct {
        int employee_id;
        char name[MAX_NAME_LEN + 1];
        float salary;
    } emp1, emp2;

    /* Initializing emp1 */
    emp1.employee_id = 4051;
    strcpy(emp1.name, "Alice Smith");
    emp1.salary = 75500.50;

    /* Initializing emp2 */
    emp2.employee_id = 4052;
    strcpy(emp2.name, "Bob Jones");
    emp2.salary = 68000.00;

    /* Printing the data */
    printf("--- Employee 1 ---\n");
    printf("ID: %d\n", emp1.employee_id);
    printf("Name: %s\n", emp1.name);
    printf("Salary: $%.2f\n\n", emp1.salary);

    printf("--- Employee 2 ---\n");
    printf("ID: %d\n", emp2.employee_id);
    printf("Name: %s\n", emp2.name);
    printf("Salary: $%.2f\n", emp2.salary);

    return 0;
}
