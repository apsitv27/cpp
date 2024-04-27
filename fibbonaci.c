#include <stdio.h>

// Recursive function to calculate Fibonacci series
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    // Prompting the user to enter the number of terms
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    // Printing the Fibonacci series
    printf("Fibonacci Series:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
