#include <iostream>


using namespace std;

int main() {
    setlocale(LC_ALL, "russian");
    double budget;
    double breadPrice = 50;
    double shirtPrice = 300;
    double penPrice = 20;
    int breadKOL, shirtKOL, penKOL;

   
    cout << "������� ��� ������: ";
    cin >> budget;
   cout << "������� 1:\n";
   cout << "1. ���� - " << breadPrice << " ������\n";
   cout << "������� ���������� �����: ";
   cin >> breadKOL;

   if (breadKOL > 0 && (breadKOL * breadPrice) > budget) {
       cout << "������������ ������� ��� ������� �����. ���������� ���������.\n";
       return 0;
   }
   cout << "������� 2:\n";
   cout << "1. ������ - " << shirtPrice << " ������\n";
   cout << "������� ���������� �����: ";
   cin >> shirtKOL;

   if (shirtKOL > 0 && (shirtKOL * shirtPrice) > budget) {
       cout << "������������ ������� ��� ������� �����. ���������� ���������.\n";
       return 0;
   }
    cout << "3. ����� - " << penPrice << " ������\n";
    cout << "������� ���������� �����: ";
    cin >> penKOL;

    
    double totalCost = (breadKOL * breadPrice) + (shirtKOL * shirtPrice) + (penKOL * penPrice);

    
    if (totalCost <= budget) {
        cout << "������� ������������. ����� ���������: " << totalCost << " ������.\n";
        budget -= totalCost;
        cout << "���������� �����: " << budget << " ������.\n";
    }
    else {
        cout << "������������ ������� ��� �������. ����� ���������: " << totalCost << " ������.\n";
    }

    return 0;
}
