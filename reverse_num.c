#include <stdio.h>

int main() {
    int num, reversedNum = 0;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the digits of the number
    do {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    } while (num != 0);

    // Display the reversed number
    printf("Reversed number: %d\n", reversedNum);

    return 0;
}
