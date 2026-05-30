/*Basic Countdown Program with many funny messages*/

#include <stdio.h>
#include <unistd.h>

int main() {
    int count = 10;

    while (count > 0) {
        printf("%d...\n", count);
        sleep(1); // Sleep for 1 second
        count--;
    }

    printf("Blast off! 🚀\n");
    printf("Hope you enjoyed the countdown! 🎉\n");
    return 0;
}

