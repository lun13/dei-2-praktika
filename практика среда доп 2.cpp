#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");

    int* arr = new int[5];

    for (int i = 0; i < 5; i++) {
        cout << " Введите " << i + 1 << " число масива - ";
        cin >> arr[i];
    }
    system("cls");
    cout << "Все числа: \n" << endl;
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << " элемент - " << arr[i] << endl;
    }
    cout << "Отрицательные числа: \n" << endl;
    for (int i = 0; i < 5; i++) {
        if (arr[i] < 0) {
            cout << i + 1 << " элемент - " << arr[i] << endl;
        }
    }
    cout << "Положительные числа: \n" << endl;
    for (int i = 0; i < 5; i++) {
        if (arr[i] > 0) {
            cout << i + 1 << " элемент - " << arr[i] << endl;
        }
    }
}