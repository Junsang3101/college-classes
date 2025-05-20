#include <stdio.h>

#define YEAR 2025

int isleap(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? 1 : 0;
}

int main (){
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month;

    printf("달 : ");
    scanf("%d", &month);

    /*
    switch (month) {
        case 1:
            printf("%d\n", days[month - 1]);
            break;
        case 2:
            printf("%d\n", days[month - 1]);
            break;
        case 3:
            printf("%d\n", days[month - 1]);
            break;
        case 4:
            printf("%d\n", days[month - 1]);
            break;
        case 5:
            printf("%d\n", days[month - 1]);
            break;
        case 6:
            printf("%d\n", days[month - 1]);
            break;
        case 7:
            printf("%d\n", days[month - 1]);
            break;
        case 8:
            printf("%d\n", days[month - 1]);
            break;
        case 9:
            printf("%d\n", days[month - 1]);
            break;
        case 10:
            printf("%d\n", days[month - 1]);
            break;
        case 11:
            printf("%d\n", days[month - 1]);
            break;
        case 12:
            printf("%d\n", days[month - 1]);
            break;
        default:
            printf("error 잘못된 값!\n");
            break;
    }
    */

    if (isleap(YEAR)) days[1]++;
    printf("%d일\n", days[month - 1]);

    return 0;
}
