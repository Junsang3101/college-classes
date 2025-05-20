#include <stdio.h>

short incomeLevel(long income){
    if (12000000 <= income) return 1;
    else if (46000000 <= income) return 2;
    else if (88000000 <= income) return 3;
    else if (150000000 <= income) return 4;
    else if (300000000 <= income) return 5;
    else if (500000000 <= income) return 6;
    else if (1000000000 <= income) return 7;
    return 0;
}

short getTaxRatio(long income) {
    short income_lv = incomeLevel(income);
    switch (income_lv) {
        case 0:
            return 6;
        case 1:
            return 15;
        case 2:
            return 24;
        case 3:
            return 35;
        case 4:
            return 38;
        case 5:
            return 40;
        case 6:
            return 42;
        case 7:
            return 45;
        default:
            return 0;
    }
}

long getTax(long income) {
    return income * getTaxRatio(income) * 0.01;
}

int progTaxDeduct(long income) {
    int income_lv = incomeLevel(income);
    switch (income_lv) {
        case 0:
            return 0;
        case 1:
            return 1080000;
        case 2:
            return 5220000;
        case 3:
            return 14900000;
        case 4:
            return 19400000;
        case 5:
            return 25400000;
        case 6:
            return 35400000;
        case 7:
            return 65400000;
        default:
            perror("error invalid income value!!\n");
            return -1;
    }
}

long getTotalTax(int income) {
    return getTax(income) - progTaxDeduct(income);
}

int main() {
    long income, tax;
    printf("소득 : ");
    scanf("%ld", &income);
    printf("소득세율 : %hd%%\n", getTaxRatio(income));
    printf("(공제 전)소득세 : %ld\n", getTax(income));
    printf("누진공제액 : %d\n", progTaxDeduct(income));
    printf("산출세액: %ld\n", getTotalTax(income));

    return 0;
}
