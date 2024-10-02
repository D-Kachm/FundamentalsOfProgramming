#include <stdio.h>

// Функція main - точка входу програми
int main() {
    // Ініціалізація цілого числа
    int integer = 42;
    
    // Ініціалізація дійсного числа
    double floatingPoint = 3.14159;
    
    // Ініціалізація символу
    char character = 'A';
    
    // Ініціалізація рядка
    const char* string = "Hello, World!";
    
    // Виведення цілого числа у десятковому форматі
    printf("Integer in decimal: %d\n", integer);
    
    // Виведення цілого числа у двійковому форматі
    
    printf("Integer in binary: %b\n, integer");

    // Виведення цілого числа у вісімковому форматі
    printf("Integer in octal: %o\n", integer);
    
    // Виведення цілого числа у шістнадцятковому форматі
    printf("Integer in hexadecimal: %X\n", integer);
    
    // Виведення дійсного числа у форматі з плаваючою комою
    printf("Floating point number in decimal: %f\n", floatingPoint);
    
    // Виведення дійсного числа в експоненційній формі
    printf("Floating point number in exponential form: %e\n", floatingPoint);
    
    // Виведення дійсного числа у гнучкому форматі
    printf("Floating point number in flexible form: %g\n", floatingPoint);
    
    // Виведення символу
    printf("Character: %c\n", character);
    
    // Виведення рядка
    printf("String: %s\n", string);
    
    // Виведення адреси вказівника
    printf("Pointer address: %p\n", (void*)&string);
    
    return 0; // Завершення програми
}

