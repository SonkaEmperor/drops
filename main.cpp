#include <iostream>

int main() {
    // Включение корректного отображения кириллицы в консоли Windows (при необходимости)
    setlocale(LC_ALL, "Russian");

    int n;
    std::cout << "Введите целое положительное число N: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Ошибка: число должно быть больше нуля!" << std::endl;
        return 1;
    }

    // 1. Пример цикла for: вывод чисел от 1 до N и их квадратов
    std::cout << "\n--- Цикл for ---\n";
    for (int i = 1; i <= n; ++i) {
        std::cout << i << "^2 = " << (i * i) << "\n";
    }

    // 2. Пример цикла while: подсчет суммы от 1 до N
    std::cout << "\n--- Цикл while ---\n";
    int sum = 0;
    int current = 1;

    while (current <= n) {
        sum += current;
        current++;
    }

    std::cout << "Сумма всех чисел от 1 до " << n << " равна: " << sum << std::endl;

    return 0;
}
