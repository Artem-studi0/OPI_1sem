#ifndef Header_h
#define Header_h
#include<iostream>
using namespace std;

void buyBread(double& budget, int& breadKOL) {
    double breadPrice = 50;

    cout << "������� 1:\n";
    cout << "1. ���� - " << breadPrice << " ������\n";
    cout << "������� ���������� �����: ";
    cin >> breadKOL;

    double totalCost = breadKOL * breadPrice;
    if (breadKOL > 0 && totalCost > budget) {
        cout << "������������ ������� ��� ������� �����. ���������� ���������.\n";
        exit(0);// ���������� ���������
    }
    budget -= totalCost; // �������� ��������� �� �������
}

void buyShirt(double& budget, int& shirtKOL) {
    double shirtPrice = 250;

    cout << "������� 2:\n";
    cout << "2. ������ - " << shirtPrice << " ������\n";
    cout << "������� ���������� ������: ";
    cin >> shirtKOL;

    double totalCost = shirtKOL * shirtPrice;
    if (shirtKOL > 0 && totalCost > budget) {
        cout << "������������ ������� ��� ������� ������. ���������� ���������.\n";
        exit(0); // ���������� ���������
    }
    budget -= totalCost; // �������� ��������� �� �������
}

void buyPens(double& budget, int& penKOL) {
    double penPrice = 20;

    cout << "3. ����� - " << penPrice << " ������\n";
    cout << "������� ���������� �����: ";
    cin >> penKOL;

    double totalCost = penKOL * penPrice;
    if (penKOL > 0 && totalCost > budget) {
        cout << "������������ ������� ��� ������� �����. ���������� ���������.\n";
        exit(0); // ���������� ���������
    }
    budget -= totalCost; // �������� ��������� �� �������
}
#endif
