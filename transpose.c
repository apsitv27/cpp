#include<stdio.h>

int main() {
    int r, c, i, j;
    
    printf("Enter the row limit: ");
    scanf("%d", &r);
    
    printf("Enter the column limit: ");
    scanf("%d", &c);
    
    int a[r][c];
    
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Original Matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }
    
    printf("Transpose Matrix:\n");
    for(i = 0; i < c; i++) {
        for(j = 0; j < r; j++) {
            printf("\t%d", a[j][i]); // Print the transpose element directly
        }
        printf("\n");
    }
    
    return 0;
}
