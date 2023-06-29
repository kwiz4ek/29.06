#include <iostream>

int main() {
    const int NUM_MONTHS = 12;
    int profits[NUM_MONTHS];

    for (int i = 0; i < NUM_MONTHS; i++) {
        std::cout << "Введите прибыль за " << i + 1 << "-й месяц: ";
        std::cin >> profits[i];
    }

    int startMonth, endMonth;
    std::cout << "Введите начальный месяц диапазона: ";
    std::cin >> startMonth;
    std::cout << "Введите конечный месяц диапазона: ";
    std::cin >> endMonth;

    if (startMonth < 1 || endMonth > NUM_MONTHS || startMonth > endMonth) {
        std::cout << "Введен неверный диапазон месяцев." << std::endl;
        return 0;
    }

    int maxProfit = profits[startMonth - 1];
    int minProfit = profits[startMonth - 1];
    int maxProfitMonth = startMonth;
    int minProfitMonth = startMonth;

    for (int i = startMonth; i <= endMonth; i++) {
        if (profits[i - 1] > maxProfit) {
            maxProfit = profits[i - 1];
            maxProfitMonth = i;
        }
        if (profits[i - 1] < minProfit) {
            minProfit = profits[i - 1];
            minProfitMonth = i;
        }
    }

    std::cout << "Месяц с максимальной прибылью в заданном диапазоне: " << maxProfitMonth << std::endl;
    std::cout << "Месяц с минимальной прибылью в заданном диапазоне: " << minProfitMonth << std::endl;

    return 0;
}
