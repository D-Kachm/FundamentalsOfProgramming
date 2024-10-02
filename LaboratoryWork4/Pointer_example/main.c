#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "uk_UA.UTF-8");

    int number; // Змінна для зберігання числа
    int* ptr;   // Вказівник на ціле число

    // Введення числа
    printf("Введіть число: ");
    scanf("%d", &number);

    // Присвоєння адреси змінної number вказівнику ptr
    ptr = &number;

    // Виведення значення та адреси через вказівник
    printf("Значення: %d\n", *ptr); // Значення, на яке вказує ptr
    printf("Адреса: %p\n", (void*)ptr); // Адреса, яку має ptr

    return 0;
}