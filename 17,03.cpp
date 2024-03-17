#include <iostream>
#include <random>
#include <time.h>
#include <Windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));
    int arr[8];
    for (int i = 0; i < 8; i++)
    {
        arr[i] = rand();
    }
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    std::cout << endl << "Максимальное значение: " << max << endl << "Минимальное зачение: " << min;
    return 0;


srand(time(NULL));
int arr[8]{};
std::cout << "Введите число(кол-во яйчеек в массиве): ";
int n, sum = 0;
std::cin >> n;
for (int i = 0; i < n; i++)
{
    arr[i] = rand() % 15;
}
for (int i = 0; i < n; i++)
{
    cout << arr[i] << "\t";
}
std::cout << "\n";
int x, y;
std::cout << "x(начало диапазона) = ";
std::cin >> x;
std::cout << "y(конец диапазона) = ";
std::cin >> y;
for (int i = 0; i < n; i++)
{
    if (arr[i] < x && arr[i] > y)
    sum += arr[i];
}
std::cout << sum;

    int d1, d2;
    const int size = 12;
    int arr[size];
    int max = arr[0], min = arr[0];
    for (int i = 0; i < size; i++)
    {
        std::cout << "Введите доход:" << endl;
        std::cin >> arr[i];
    }
    std::cout << "Введите диапазон:" << endl;
    std::cin >> d1 >> d2;
    for (int j = 0; j >= d1, j < d2; j++)
    {
        if (min > arr[j])
            min = arr[j];
        if (max < arr[j])
            max = arr[j];
    }
    std::cout << "Минимальный доход: " << min << endl;
    std::cout << "Максимальный доход: " << max << endl;

}