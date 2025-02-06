#include <iostream>
#include<Windows.h>
using namespace std;

void processLatinLetters() {
    string input; // ���������� ������ ��� �����
    cout << "������� ������ � ����������� ���������: " << endl;
    cin >> input; // ������ ������
    for (int i = 0; i < input.length(); i+=2) {
        int a1 = (int)input[i]; // �������� ASCII ��� �������� �������
        int b1 = (int)input[i+1]; // �������� ASCII ��� ���������� �������
        int raz = b1 - a1;
        cout << "������� ����� '" << input[i] << "' � '" << input[i + 1] << "': " << raz << endl;
    }
}
void processRussianLetters() {
   
    string input; // ���������� ������ ��� �����
    cout << "������� ������ � �������� ���������: " << endl;
    cin >> input; // ������ ������
    for (int i = 0; i < input.length(); i += 2) {
        int a1 = (int)input[i]; // �������� ��� �������� �������
        int b1 = (int)input[i + 1]; // �������� ��� ���������� �������
        int raz = b1 - a1;
        cout << "������� ����� '" << input[i + 1] << "' � '" << input[i] << "': " << raz << endl;
    }
}

void processDigits() {
    int in = 0;
    int a1 = 0;
    char a;
    cout << "����� ";
    cin >> a;
    a1 = char(a);
    cout << "a1 = " << a1;
}
 int main(){
     SetConsoleCP(1251);
     
     setlocale(LC_ALL, "russian");
     int in = 0;
     int a1 = 0;
     char a;
     string input; // ���������� ������ ��� �����
     cout << "����� �� 4" << endl;
     cout << "1 - ���������� �������" << endl;
     cout << "2 - ������� �������" << endl;
     cout << "3 - �����" << endl;
     cout << "4 - �����" << endl;
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