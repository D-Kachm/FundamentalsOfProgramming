#include <stdio.h>

void printHundreds(int digit) {
    switch (digit) {
        case 1: printf("сто "); break;
        case 2: printf("двісті "); break;
        case 3: printf("триста "); break;
        case 4: printf("чотириста "); break;
        case 5: printf("п'ятсот "); break;
        case 6: printf("шістсот "); break;
        case 7: printf("сімсот "); break;
        case 8: printf("вісімсот "); break;
        case 9: printf("дев'ятсот "); break;
    }
}

void printTens(int digit) {
    switch (digit) {
        case 2: printf("двадцять "); break;
        case 3: printf("тридцять "); break;
        case 4: printf("сорок "); break;
        case 5: printf("п'ятдесят "); break;
        case 6: printf("шістдесят "); break;
        case 7: printf("сімдесят "); break;
        case 8: printf("вісімдесят "); break;
        case 9: printf("дев'яносто "); break;
    }
}

void printTeens(int digit) {
    switch (digit) {
        case 0: printf("десять "); break;
        case 1: printf("одинадцять "); break;
        case 2: printf("дванадцять "); break;
        case 3: printf("тринадцять "); break;
        case 4: printf("чотирнадцять "); break;
        case 5: printf("п'ятнадцять "); break;
        case 6: printf("шістнадцять "); break;
        case 7: printf("сімнадцять "); break;
        case 8: printf("вісімнадцять "); break;
        case 9: printf("дев'ятнадцять "); break;
    }
}

void printUnits(int digit) {
    switch (digit) {
        case 1: printf("один "); break;
        case 2: printf("два "); break;
        case 3: printf("три "); break;
        case 4: printf("чотири "); break;
        case 5: printf("п'ять "); break;
        case 6: printf("шість "); break;
        case 7: printf("сім "); break;
        case 8: printf("вісім "); break;
        case 9: printf("дев'ять "); break;
    }
}

int main() {
    int number;

    printf("Введіть тризначне число: ");
    scanf("%d", &number);

    if (number < 100 || number > 999) {
        printf("Помилка: введіть тризначне число.\n");
        return 1;
    }

    int hundreds = number / 100;
    int tens = (number / 10) % 10;
    int units = number % 10;

    printHundreds(hundreds);

    if (tens == 1) {
        printTeens(units); // Якщо число від 10 до 19
    } else {
        printTens(tens);   // Якщо десятки звичайні (від 20 до 90)
        printUnits(units); // Друк одиниць
    }

    printf("\n");
    return 0;
}

