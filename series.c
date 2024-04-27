#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    double x = 1.0;

    // Prompting the user to enter the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculating the series using a for loop
    for (int i = 2; i <= n; i++) {
        x += 1.0 / factorial(i);
    }

    // Displaying the result
    printf("The value of the series for n = %d is: %.3lf\n", n, x);

    return 0;
}
