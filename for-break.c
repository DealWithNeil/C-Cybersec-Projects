/*Display a simple program with the for loop and multiple break statements*/

#include<stdio.h>

int main()
{
    int i;
    for(i=0; i<10; i++)
    {
        if(i==3)
        {
            break;
        }
        printf("%d ",i);
    }
return 0;
}