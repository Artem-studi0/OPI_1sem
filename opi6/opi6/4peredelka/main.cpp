#include <iostream>
#include "Header.h"


int main() {
    setlocale(LC_ALL, "russian");
    double budget;

    cout << "������� ��� ������: ";
    cin >> budget;

    int breadKOL = 0, shirtKOL = 0, penKOL = 0;

    buyBread(budget, breadKOL);
    buyShirt(budget, shirtKOL);
    buyPens(budget, penKOL);

    double totalCost = (breadKOL * 50) + (shirtKOL * 250) + (penKOL * 20);
    cout << "������� ������������. ����� ���������: " << totalCost << " ������.\n";
    cout << "���������� �����: " << budget << " ������.\n";

    return 0;
}
