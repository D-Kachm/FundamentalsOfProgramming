#include <stdio.h>
#include <math.h>  // Для використання функцій sqrt

int main() {
    // Оголошення змінних для коефіцієнтів
    double a, b, c;
    double discriminant, root1, root2;

    // Введення коефіцієнтів з клавіатури
    printf("Введіть коефіцієнт a: ");
    scanf("%lf", &a);
    printf("Введіть коефіцієнт b: ");
    scanf("%lf", &b);
    printf("Введіть коефіцієнт c: ");
    scanf("%lf", &c);

    // Перевірка, чи a не дорівнює 0
    if (a == 0) {
        printf("Коефіцієнт a не може дорівнювати нулю.\n");
        return 1; // Завершення програми з помилкою
    }

    // Обчислення дискримінанта
    discriminant = b * b - 4 * a * c;

    // Визначення коренів залежно від дискримінанта
    if (discriminant > 0) {
        // Два різних корені
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Корені рівняння: x1 = %.2f, x2 = %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        // Один корінь
        root1 = -b / (2 * a);
        printf("Рівняння має один корінь: x = %.2f\n", root1);
    } else {
        // Немає дійсних коренів
        printf("Рівняння не має дійсних коренів.\n");
    }

    return 0; // Завершення програми
}