#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    float x; // Количество рублей
    float p; // Процент
    float y; // Количество лет
    float pr; // Расчёт процентов
    float r; // результат

    while (true)
    {
        cout << "Введите сумму вклада : ";
        cin >> x;
        cout << endl;
        cout << "Введите процент : ";
        cin >> p;
        cout << endl;
        cout << "Количество лет : " << endl;
        cin >> y;
        cout << endl;
        pr = (x * p) / 100; // Расчёт процентов
        r = pr * y;
        cout << "За " << y << " лет у вас будет сумма в " << r << " рублей." << endl;
        cin.get();
        cin.get();
    }
}