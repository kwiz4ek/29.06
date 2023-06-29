#include <iostream>

int main() {
    int size;
    int minValue;
    int rangeStart, rangeEnd;

    std::cout << "Введите размер массива: ";
    std::cin >> size;

    std::cout << "Введите начало диапазона случайных чисел: ";
    std::cin >> rangeStart;
    std::cout << "Введите конец диапазона случайных чисел: ";
    std::cin >> rangeEnd;

    std::cout << "Введите значение для сравнения: ";
    std::cin >> minValue;

    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % (rangeEnd - rangeStart + 1) + rangeStart;
    }

    std::cout << "Массив: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < minValue) {
            sum += arr[i];
        }
    }

    std::cout << "Сумма элементов, значения которых меньше " << minValue << ": " << sum << std::endl;

    return 0;
}
