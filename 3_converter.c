#include <stdio.h>

struct BaseConverter {
    double celsius;
};

double convertToKelvin(double celsius) {
    return celsius + 273.15;
}

double convertToFahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}

void displayResult(double result, const char* unit) {
    printf("Результат конвертации: %.2f %s\n", result, unit);
}

void convert(struct BaseConverter* converter, char choice) {
    double result;

    switch (choice) {
        case 'K':
            result = convertToKelvin(converter->celsius);
            displayResult(result, "Кельвины");
            break;
        case 'F':
            result = convertToFahrenheit(converter->celsius);
            displayResult(result, "Фаренгейты");
            break;
        default:
            printf("Неверный выбор. Поддерживаются только 'K' и 'F'\n");
            break;
    }
}

int main() {
    struct BaseConverter converter;

    printf("Введите градусы Цельсия: ");
    scanf("%lf", &converter.celsius);

    char choice;
    printf("Выберите конвертацию:\n");
    printf("K - Кельвины\n");
    printf("F - Фаренгейты\n");
    printf("Ваш выбор: ");
    scanf(" %c", &choice);

    convert(&converter, choice);

    return 0;
}
