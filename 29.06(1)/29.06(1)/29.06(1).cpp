#include <iostream>

int main() {
    const int SIZE = 10; 
    int arr[SIZE]; 
    int min, max;

    for (int i = 0; i < SIZE; i++) {
        arr[i] = std::rand() % 100; 
    }

    std::cout << "Массив: ";
    for (int i = 0; i < SIZE; i++) {
        std::cout << arr[i] << " ";
    }

    min = arr[0];
    max = arr[0];
    for (int i = 1; i < SIZE; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    std::cout << std::endl;
    std::cout << "Минимальный элемент: " << min << std::endl;
    std::cout << "Максимальный элемент: " << max << std::endl;

    return 0;
}
