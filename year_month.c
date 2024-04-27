#include <stdio.h>

int main() {
    int month;

    // Input the month number from the user
    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    // Print the name of the month based on the input number
    switch (month) {
        case 1:
            printf("January\n");
            break;
        case 2:
            printf("February\n");
            break;
        case 3:
            printf("March\n");
            break;
        case 4:
            printf("April\n");
            break;
        case 5:
            printf("May\n");
            break;
        case 6:
            printf("June\n");
            break;
        case 7:
            printf("July\n");
            break;
        case 8:
            printf("August\n");
            break;
        case 9:
            printf("September\n");
            break;
        case 10:
            printf("October\n");
            break;
        case 11:
            printf("November\n");
            break;
        case 12:
            printf("December\n");
            break;
        default:
            printf("Invalid month number. Please enter a number between 1 and 12.\n");
    }

    return 0;
}



#include <stdio.h>

int main() {
    int day;

    // Input the day number from the user
    printf("Enter the day number (1-7): ");
    scanf("%d", &day);

    // Print the name of the day based on the input number
    switch (day) {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid day number. Please enter a number between 1 and 7.\n");
    }

    return 0;
}
