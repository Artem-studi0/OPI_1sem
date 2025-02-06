#include <iostream>
#include <string>
#include<Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "russian");
    int in = 0;
    int a1 = 0;
    char a;
    string input; // Используем строку для ввода
    cout << "ВЫБОР ИЗ 4" << endl;
    cout << "1 - английские символы" << endl;
    cout << "2 - русские символы" << endl;
    cout << "3 - цифры" << endl;
    cout << "4 - выход" << endl;
    cin >> in;

    switch (in)
    {
    case 1: {
        cout << "Введите строку с английскими символами: " << endl;
        cin >> input; // Вводим строку
        for (int i = 0; i < input.length() - 1; ++i) {
            int a1 = (int)input[i]; // Получаем ASCII код текущего символа
            int b1 = (int)input[i]; // Получаем ASCII код следующего символа
            int raz = b1 - a1;
            cout << "Разница между '" << input[i] << "' и '" << input[i + 1] << "': " << raz << endl;
        }
        break;
    }
    case 2: {
        cout << "Введите строку с русскими символами: " << endl;
        cin >> input; // Вводим строку
        for (int i = 0; i < input.length(); i += 2) {
            int a1 = (int)input[i]; // Получаем код текущего символа
            int b1 = (int)input[i + 1]; // Получаем код следующего символа
            int raz = b1 - a1;
            cout << "Разница между '" << input[i + 1] << "' и '" << input[i] << "': " << raz << endl;
        }
        break;
    }
    case 3: {
        cout << "цифра ";
        cin >> a;
        a1 = char(a);
        cout << "a1 = " << a1;
        break;
    }
    case 4: {
        cout << "Выход из программы." << endl;
        break;
    }
    default: {
        cout << "Введите корректный номер (1-4)!" << endl;
        break;
    }
    }
    return 0;
}
