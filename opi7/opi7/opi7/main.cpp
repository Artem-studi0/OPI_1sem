#include <iostream>
using namespace std;

void processLatinLetters() {
    char latinckapropicnabukva, latinckactrocnabukva;
    cout << "Введите латинские буквы: ";
    cin >> latinckapropicnabukva >> latinckactrocnabukva;
    int raz = latinckactrocnabukva - latinckapropicnabukva;
    cout << "Raz = " << raz << endl;
}

void processRussianLetters() {
    char ruskactrocnabukva, ruckapropicnabukva;
    cout << "Введите русские буквы: ";
    cin >> ruckapropicnabukva >> ruskactrocnabukva;
    int raz = ruskactrocnabukva - ruckapropicnabukva;
    cout << "Razn = " << raz << endl;
}

void processDigits() {
    char cifra;
    cout << "Введите цифру: ";
    cin >> cifra;
    int a1 =char('a'); // Преобразование символа в цифру
    cout << "a1 = " <<cifra << endl;
}

int main() {
    setlocale(LC_ALL, "russian");
    int in = 0;
    cout << "ВЫБЕРИТЕ:\t1. Жесткие английские латинские буквы\t2. Жесткие русские буквы\t3. Цифры" << endl;
    cin >> in;

    switch (in) {
    case 1:
        processLatinLetters();
        break;
    case 2:
        processRussianLetters();
        break;
    case 3:
        processDigits();
        break;
    default:
        cout << "Нормально введите!" << endl;
        break;
    }

    return 0;
}
