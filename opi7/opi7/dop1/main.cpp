#include <iostream>
#include <cmath>  // ��� ������� sqrt()

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double x1, y1, x2, y2;  // ���������� �����
    double distance;        // ���������� ����� �������

    // ���� ��������� ������ ����� M1(x1, y1)
    cout << "������� ���������� ������ ����� (x1, y1): ";
    cin >> x1 >> y1;

    // ���� ��������� ������ ����� M2(x2, y2)
    cout << "������� ���������� ������ ����� (x2, y2): ";
    cin >> x2 >> y2;

    // ���������� ���������� �� �������
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // ����� ����������
    cout << "���������� ����� ������� M1 � M2: " << distance << endl;

    return 0;
}
