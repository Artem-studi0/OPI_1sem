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
    string input; // ���������� ������ ��� �����
    cout << "����� �� 4" << endl;
    cout << "1 - ���������� �������" << endl;
    cout << "2 - ������� �������" << endl;
    cout << "3 - �����" << endl;
    cout << "4 - �����" << endl;
    cin >> in;

    switch (in)
    {
    case 1: {
        cout << "������� ������ � ����������� ���������: " << endl;
        cin >> input; // ������ ������
        for (int i = 0; i < input.length() - 1; ++i) {
            int a1 = (int)input[i]; // �������� ASCII ��� �������� �������
            int b1 = (int)input[i]; // �������� ASCII ��� ���������� �������
            int raz = b1 - a1;
            cout << "������� ����� '" << input[i] << "' � '" << input[i + 1] << "': " << raz << endl;
        }
        break;
    }
    case 2: {
        cout << "������� ������ � �������� ���������: " << endl;
        cin >> input; // ������ ������
        for (int i = 0; i < input.length(); i += 2) {
            int a1 = (int)input[i]; // �������� ��� �������� �������
            int b1 = (int)input[i + 1]; // �������� ��� ���������� �������
            int raz = b1 - a1;
            cout << "������� ����� '" << input[i + 1] << "' � '" << input[i] << "': " << raz << endl;
        }
        break;
    }
    case 3: {
        cout << "����� ";
        cin >> a;
        a1 = char(a);
        cout << "a1 = " << a1;
        break;
    }
    case 4: {
        cout << "����� �� ���������." << endl;
        break;
    }
    default: {
        cout << "������� ���������� ����� (1-4)!" << endl;
        break;
    }
    }
    return 0;
}
