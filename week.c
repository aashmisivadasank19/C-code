#include <stdio.h>

int main() {
    int dayNumber;

    
    printf("Enter a number (1-7) ");
    scanf("%d", &dayNumber);

    // Use a switch statement to determine and print the day name
    switch (dayNumber) {
        case 1:
            printf("Today is Monday");
            break;
        case 2:
            printf("Today is Tuesday;");
            break;
        case 3:
            printf("Today is Wednesday.\n");
            break;
        case 4:
            printf("Today is Thursday.\n");
            break;
        case 5:
            printf("Today is Friday.\n");
            break;
        case 6:
            printf(" Saturday");
            break;
        case 7:
            printf("Today is Sunday.\n");
            break;
        default:
            printf("Invalid input");
            break;
    }

    return 0;
