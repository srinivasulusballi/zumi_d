#include <stdio.h>
#include <unistd.h>  // for sleep()

int main() {
    while (1) {
        printf("LED ON\n");
        sleep(1);   // wait 1 second

        printf("LED OFF\n");
        sleep(1);   // wait 1 second
    }
    return 0;
}
