#include<stdio.h>

int main() {
    int r, c, i, j;
    
    printf("Enter the row limit: ");
    scanf("%d", &r);
    
    printf("Enter the column limit: ");
    scanf("%d", &c);
    
    int a[r][c], b[r][c], t[r][c];
    
    printf("Enter the elements of the first matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Enter the elements of the second matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    
    printf("Addition Value:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            t[i][j] = a[i][j] + b[i][j]; // put '*' for the mulitplication
            printf("\t%d", t[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
