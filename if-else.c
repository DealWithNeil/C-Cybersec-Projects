/*Displaying a multiple nested if-else */


#include <stdio.h>

    int main () {

       int i = 10, j = 20, k = 30, max;
       if (i > j) {
  if (i > k) 
    max = i;
  else 
    max = k;
} else {
  if (j > k) 
    max = j;
  else 
    max = k;
}


        return 0;
    }