#include <stdio.h>

// Функція для виведення числа від 1 до 19 прописом
void print_1_to_19(int n) {
    char *words[] = {"", "один", "два", "три", "чотири", "п'ять", "шість", "сім", "вісім", "дев'ять", 
                     "десять", "одинадцять", "дванадцять", "тринадцять", "чотирнадцять", 
                     "п'ятнадцять", "шістнадцять", "сімнадцять", "вісімнадцять", "дев'ятнадцять"};
    printf("%s", words[n]);
}

// Функція для виведення десятків прописом
void print_tens(int n) {
    char *words[] = {"", "", "двадцять", "тридцять", "сорок", "п'ятдесят", "шістдесят", 
                     "сімдесят", "вісімдесят", "дев'яносто"};
    printf("%s", words[n]);
}

// Функція для виведення числа сотень прописом
void print_hundreds(int n) {
    char *words[] = {"", "сто", "двісті", "триста", "чотириста", "п'ятсот", "шістсот", 
                     "сімсот", "вісімсот", "дев'ятсот"};
    printf("%s", words[n]);
}

void number_to_words(int num) {
    if (num == 0) {
        printf("нуль");
        return;
    }

    if (num >= 100) {
        print_hundreds(num / 100);
        num %= 100;
        if (num > 0) {
            printf(" ");
        }
    }

    if (num >= 20) {
        print_tens(num / 10);
        if (num % 10 != 0) {
            printf(" ");
            print_1_to_19(num % 10);
        }
    } else if (num > 0) {
        print_1_to_19(num);
    }
}

int main() {
    int number;

    printf("Введіть тризначне число: ");
    scanf("%d", &number);

    if (number < 100 || number > 999) {
        printf("Будь ласка, введіть тризначне число.\n");
    } else {
        printf("Число прописом: ");
        number_to_words(number);
        printf("\n");
    }

    return 0;
}
