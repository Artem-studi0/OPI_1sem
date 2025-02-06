#include <iostream>
using namespace std;

void processLatinLetters() {
    char latinckapropicnabukva, latinckactrocnabukva;
    cout << "������� ��������� �����: ";
    cin >> latinckapropicnabukva >> latinckactrocnabukva;
    int raz = latinckactrocnabukva - latinckapropicnabukva;
    cout << "Raz = " << raz << endl;
}

void processRussianLetters() {
    char ruskactrocnabukva, ruckapropicnabukva;
    cout << "������� ������� �����: ";
    cin >> ruckapropicnabukva >> ruskactrocnabukva;
    int raz = ruskactrocnabukva - ruckapropicnabukva;
    cout << "Razn = " << raz << endl;
}

void processDigits() {
    char cifra;
    cout << "������� �����: ";
    cin >> cifra;
    int a1 =char('a'); // �������������� ������� � �����
    cout << "a1 = " <<cifra << endl;
}

int main() {
    setlocale(LC_ALL, "russian");
    int in = 0;
    cout << "��������:\t1. ������� ���������� ��������� �����\t2. ������� ������� �����\t3. �����" << endl;
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
        cout << "��������� �������!" << endl;
        break;
    }

    return 0;
}
