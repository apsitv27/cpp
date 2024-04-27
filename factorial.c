#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    // Input the number from the user
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Calculate and print the factorial
    printf("Factorial of %d = %d\n", num, factorial(num));

    return 0;
}
