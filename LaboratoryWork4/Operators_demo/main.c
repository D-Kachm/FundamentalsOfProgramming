#include <stdio.h>

// Функція для виведення числа у двійковому форматі
void printBinary(unsigned int n) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
}

int main() {
    int a = 10, b = 3;
    
    // Арифметичні оператори
    printf("Арифметичні оператори:\n");
    printf("a + b = %d\n", a + b); // Додавання
    printf("a - b = %d\n", a - b); // Віднімання
    printf("a * b = %d\n", a * b); // Множення
    printf("a / b = %d\n", a / b); // Ділення
    printf("a %% b = %d\n", a % b); // Остача від ділення

    // Інкремент та декремент
    printf("a++ = %d\n", a++); // Постфіксний інкремент
    printf("++a = %d\n", ++a); // Префіксний інкремент
    printf("b-- = %d\n", b--); // Постфіксний декремент
    printf("--b = %d\n", --b); // Префіксний декремент

    // Логічні оператори
    int x = 1, y = 0;
    printf("\nЛогічні оператори:\n");
    printf("x && y = %d\n", x && y); // Логічне І
    printf("x || y = %d\n", x || y); // Логічне АБО
    printf("!x = %d\n", !x);         // Логічне НЕ

    // Побітові оператори
    unsigned int m = 5, n = 3;
    printf("\nПобітові оператори:\n");
    printf("m у двійковому форматі: ");
    printBinary(m);
    printf("n у двійковому форматі: ");
    printBinary(n);
    printf("m & n = ");
    printBinary(m & n); // Побітове І
    printf("m | n = ");
    printBinary(m | n); // Побітове АБО
    printf("m ^ n = ");
    printBinary(m ^ n); // Побітове виключне АБО (XOR)
    printf("~m = ");
    printBinary(~m);    // Побітове НЕ
    printf("m << 1 = ");
    printBinary(m << 1); // Зсув вліво
    printf("m >> 1 = ");
    printBinary(m >> 1); // Зсув вправо

    return 0;
}
