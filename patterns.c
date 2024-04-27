#include <stdio.h>

int main() {
    int i, j;
    
    // Pattern 1
    printf("Pattern 1:\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    
    //Pattern 1:
    // 1
    // 12
    // 123
    // 1234
    // 12345
    
    // Pattern 2
    printf("\nPattern 2:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j <= i; j++) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }
    // Pattern 2:
    // A
    // AB
    // ABC
    // ABCD
    // ABCDE

    //pattern 3 
    printf("\n Pattern 3 \n");
     for (i = 1; i <= 5; i++) {
        // Loop to print the current row number 'i' times
        for (j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
    //  Pattern 3 
    // 1
    // 22
    // 333
    // 4444
    // 55555
    
    //pattern 4 
    printf("\n Pattern 4 \n");
    for (i = 0; i < 5; i++) {
        // Loop to print the current alphabet 'A' + current row number
        for (j = 0; j <= i; j++) {
            printf("%c", 'A' + i);
        }
        printf("\n");
    }
    //  Pattern 4 
    // A
    // BB
    // CCC
    // DDDD
    // EEEEE

    return 0;
}
