#include <iostream>

int main() {
    int N;

    std::cout << "Введите размер массива: ";
    std::cin >> N;

    double* arr = new double[N];
    for (int i = 0; i < N; i++) {
        std::cout << "Введите элемент " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    double sumNegative = 0.0;
    for (int i = 0; i < N; i++) {
        if (arr[i] < 0) {
            sumNegative += arr[i];
        }
    }

    double minElement = arr[0];
    double maxElement = arr[0];
    int minIndex = 0;
    int maxIndex = 0;
    for (int i = 1; i < N; i++) {
        if (arr[i] < minElement) {
            minElement = arr[i];
            minIndex = i;
        }
        if (arr[i] > maxElement) {
            maxElement = arr[i];
            maxIndex = i;
        }
    }

    double productMinMax = 1.0;
    int start = (minIndex < maxIndex) ? minIndex + 1 : maxIndex + 1;
    int end = (minIndex < maxIndex) ? maxIndex : minIndex;
    for (int i = start; i < end; i++) {
        productMinMax *= arr[i];
    }

    double productEven = 1.0;
    for (int i = 0; i < N; i += 2) {
        productEven *= arr[i];
    }

    double sumBetweenNegatives = 0.0;
    int firstNegativeIndex = -1;
    int lastNegativeIndex = -1;
    for (int i = 0; i < N; i++) {
        if (arr[i] < 0) {
            if (firstNegativeIndex == -1) {
                firstNegativeIndex = i;
            }
            else {
                lastNegativeIndex = i;
            }
        }
    }
    if (firstNegativeIndex != -1 && lastNegativeIndex != -1) {
        start = (firstNegativeIndex < lastNegativeIndex) ? firstNegativeIndex + 1 : lastNegativeIndex + 1;
        end = (firstNegativeIndex < lastNegativeIndex) ? lastNegativeIndex : firstNegativeIndex;
        for (int i = start; i < end; i++) {
            sumBetweenNegatives += arr[i];
        }
    }

    std::cout << "Сумма отрицательных элементов: " << sumNegative << std::endl;
    std::cout << "Произведение элементов, находящихся между минимальным и максимальным элементами: " << productMinMax << std::endl;
    std::cout << "Произведение элементов с четными номерами: " << productEven << std::endl;
    std::cout << "Сумма элементов, находящихся между первым и последним отрицательными элементами: " << sumBetweenNegatives << std::endl;


    return 0;
}
