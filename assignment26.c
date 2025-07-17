#include <stdio.h>

int main() {
    int i;
printf("Using while loop:\n");
    i = 1;
    while (i <= 10) {
        printf("%d ", i);#include <stdio.h>

int main() {
    int num, month;

 printf("Enter an integer to check even or odd: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is Even\n", num);
    } else {
        printf("%d is Odd\n", num);
    }

printf("\nEnter a number (1-12) to get the month name: ");
scanf("%d", &month);
switch (month) {
        case 1:
            printf("Month: January\n");
            break;
        case 2:
            printf("Month: February\n");
            break;
        case 3:
            printf("Month: March\n");
            break;
        case 4:
            printf("Month: April\n");
            break;
        case 5:
            printf("Month: May\n");
            break;
        case 6:
printf("Month: June\n");
            break;
        case 7:
            printf("Month: July\n");
            break;
        case 8:
            printf("Month: August\n");
            break;
        case 9:
            printf("Month: September\n");
            break;
        case 10:
            printf("Month: October\n");
            break;
        case 11:
            printf("Month: November\n");
break;
case 12:
printf("Month: December\n");
break;
default:
printf("Invalid month number! Please enter a value between 1 and 12.\n");
    }

    return 0;
}

        i++;
    }

    printf("\n\n");
printf("Using for loop:\n");
for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }

    printf("\n\n");
printf("Using do-while loop:\n");
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 10);

    printf("\n");

    return 0;
}
