#include <stdio.h>

int main() {
    int num[10];
    int n, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {      
        scanf("%d", &num[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n - 1; j++) {
            if (num[j] < num[j + 1]) {     // use < for ascending order and > for descending order 
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", num[i]);
    }

    return 0;
}