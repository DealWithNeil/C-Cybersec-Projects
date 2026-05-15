/* Show the output produced by each of the following program fragments. Assume that i, j,
and k are int variables. */

#include <stdio.h>

int main (void) {

    int i = 1, j = 2, k = 3;

    printf("%d\n", -i); /* Output: -1 */
    printf("%d\n", +j); /* Output: 2 */
    printf("%d\n", -k); /* Output: -3 */

    return 0;

}