#include <stdio.h>

int main() {
    int x, y, *a, *b, temp;

    // Input values of x and y
    printf("Enter the value of x and y\n");
    scanf("%d%d", &x, &y);

    // Display the values before swapping
    printf("Before Swapping\nx = %d\ny = %d\n", x, y);

    // Pointers a and b point to the addresses of x and y respectively
    a = &x;
    b = &y;

    // Swapping the values using pointers
    temp = *a;
    *a = *b;
    *b = temp;

    // Display the values after swapping
    printf("After Swapping\nx = %d\ny = %d\n", x, y);

    return 0;
}




#include <stdio.h>

// Function to swap values of two variables
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    // Input values for two variables
    printf("Enter value for num1 and num2: ");
    scanf("%d %d", &num1, &num2);

    // Display values before swapping
    printf("Before swapping:\n");
    printf("num1 = %d\nnum2 = %d\n", num1, num2);
     
    swap(&num1, &num2);

    // Display values after swapping
    printf("\nAfter swapping:\n");
    printf("num1 = %d\nnum2 = %d\n", num1, num2);
     
    return 0;
}
