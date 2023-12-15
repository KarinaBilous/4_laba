#include <iostream>
using namespace std;

// Функція для перестановки лівого числа в кінець
int rearrangeNumber(int num) {
    // Перевірка, чи число є трьохзначним
    if (num >= 100 && num <= 999) {
        // Знаходимо ліве число
        int leftDigit = num / 100;

        // Переставляємо ліве число в кінець
        num = num % 100 * 10 + leftDigit;

        return num;
    } else {
        // Повертаємо -1, якщо число не є трьохзначним
        return -1;
    }
}

int main() {
    int number;
    setlocale(LC_ALL, "ukr");
    // Зчитуємо трьохзначне число
    cout << "Введіть трьохзначне число: ";
    cin >> number;

    // Викликаємо функцію для перестановки лівого числа в кінець
    int result = rearrangeNumber(number);

    if (result != -1) {
        // Виводимо результат
        cout << "Результат: " << result << endl;
    } else {
        cout << "Будь ласка, введіть трьохзначне число." << endl;
    }

    return 0;
}