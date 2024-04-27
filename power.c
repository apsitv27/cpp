#include <stdio.h>

int power(int x, int n) {
    if (n != 0)
        return (x * power(x, n - 1));
    else
        return 1;
}

int main() {
    int x, n, y;
    
    printf("Enter base number: ");
    scanf("%d", &x);
    
    printf("Enter power number (positive integer): ");
    scanf("%d", &n);
    
    y = power(x, n);
    
    printf("%d = %d^%d\n", y, x, n);
    
    return 0;
}
