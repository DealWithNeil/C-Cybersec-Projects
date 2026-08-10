/* Display and print multiple type definition with portability programs.*/

#include <stdio.h>

int main(void)
{
    typedef float Dollars;

    Dollars amount = 100.50;
    printf("The value of amount is: %.2f\n", amount);

    Dollars cash_in, cash_out;

    cash_in = 50.25;
    cash_out = 20.75;
    printf("The value of cash_in is: %.2f\n", cash_in);
    printf("The value of cash_out is: %.2f\n", cash_out);

    
    return 0;
}
