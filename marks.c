#include <stdio.h>

int main() {
    int marks;
    
    // Taking input from the user
    printf("Enter the marks: ");
    scanf("%d", &marks);
    
    // Calculating the grade based on the specified conditions
    if (marks >= 60 && marks < 75) {
        printf("Grade: First class\n");
    }
    else if (marks >=55 && marks<65){
        printf("Grade: Second class\n");
    }
    else if (marks >=40 && marks<55){
        printf("Grade: Third class\n");
    }
     else {
        printf("No grade assigned\n");
    }
    
    return 0;
}
