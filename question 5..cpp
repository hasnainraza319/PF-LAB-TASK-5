#include <stdio.h>

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    // FOR EVEN AND ODD WE USE BITWISE AND
    if (number & 1) {
        printf("%d is odd.\n", number);
    } else {
        printf("%d is even.\n", number);
    }

    return 0;
}
