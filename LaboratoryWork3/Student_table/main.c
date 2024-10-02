#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100 // Максимальна кількість студентів
#define MAX_LENGTH 100   // Максимальна довжина рядка

// Структура для зберігання даних про студента
typedef struct {
    char lastName[MAX_LENGTH];      // Прізвище студента
    char initials[MAX_LENGTH];      // Ініціали студента
    char email[MAX_LENGTH];         // Електронна пошта
    char favoriteColor[MAX_LENGTH]; // Улюблений колір
} Student;

// Функція для виведення заголовку таблиці
void printTableHeader() {
    printf("%-5s %-20s %-10s %-30s %-15s\n", "№", "Last Name", "Initials", "Email", "Favorite Color");
    printf("--------------------------------------------------------------------------\n");
}

// Функція для виведення інформації про студента
void printStudent(Student student, int index) {
    printf("%-5d %-20s %-10s %-30s %-15s\n", index + 1, student.lastName, student.initials, student.email, student.favoriteColor);
}

int main() {
    int numStudents; // Кількість студентів
    Student students[MAX_STUDENTS]; // Масив студентів

    // Запитуємо кількість студентів
    printf("Enter the number of students (max. %d): ", MAX_STUDENTS);
    scanf("%d", &numStudents);
    getchar(); // Очищаємо буфер

    // Введення даних про кожного студента
    for (int i = 0; i < numStudents; i++) {
        printf("Enter data for student №%d:\n", i + 1);
        
        // Введення прізвища студента
        printf("Last Name: ");
        fgets(students[i].lastName, MAX_LENGTH, stdin);
        students[i].lastName[strcspn(students[i].lastName, "\n")] = '\0'; // Видаляємо символ нового рядка
        
        // Введення ініціалів
        printf("Initials: ");
        fgets(students[i].initials, MAX_LENGTH, stdin);
        students[i].initials[strcspn(students[i].initials, "\n")] = '\0'; // Видаляємо символ нового рядка

        // Введення електронної пошти
        printf("Email: ");
        fgets(students[i].email, MAX_LENGTH, stdin);
        students[i].email[strcspn(students[i].email, "\n")] = '\0'; // Видаляємо символ нового рядка

        // Введення улюбленого кольору
        printf("Favorite Color: ");
        fgets(students[i].favoriteColor, MAX_LENGTH, stdin);
        students[i].favoriteColor[strcspn(students[i].favoriteColor, "\n")] = '\0'; // Видаляємо символ нового рядка

        printf("\n");
    }

    // Виведення таблиці
    printTableHeader();
    for (int i = 0; i < numStudents; i++) {
        printStudent(students[i], i);
    }

    return 0;
}

