#include <stdio.h>

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum = num, sum = 0;

    // Calculate sum of cubes of digits
    while (num != 0) {
        int digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }

    // Check if the sum is equal to the original number
    return originalNum == sum;
}

int main() {
    int num;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is an Armstrong number
    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
