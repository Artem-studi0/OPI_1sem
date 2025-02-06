#ifndef Header_h
#define Header_h
#include<iostream>
using namespace std;

void buyBread(double& budget, int& breadKOL) {
    double breadPrice = 50;

    cout << "Магазин 1:\n";
    cout << "1. Хлеб - " << breadPrice << " рублей\n";
    cout << "Введите количество хлеба: ";
    cin >> breadKOL;

    double totalCost = breadKOL * breadPrice;
    if (breadKOL > 0 && totalCost > budget) {
        cout << "Недостаточно средств для покупки хлеба. Завершение программы.\n";
        exit(0);// Завершение программы
    }
    budget -= totalCost; // Вычитаем стоимость из бюджета
}

void buyShirt(double& budget, int& shirtKOL) {
    double shirtPrice = 250;

    cout << "Магазин 2:\n";
    cout << "2. Одежда - " << shirtPrice << " рублей\n";
    cout << "Введите количество одежды: ";
    cin >> shirtKOL;

    double totalCost = shirtKOL * shirtPrice;
    if (shirtKOL > 0 && totalCost > budget) {
        cout << "Недостаточно средств для покупки одежды. Завершение программы.\n";
        exit(0); // Завершение программы
    }
    budget -= totalCost; // Вычитаем стоимость из бюджета
}

void buyPens(double& budget, int& penKOL) {
    double penPrice = 20;

    cout << "3. Ручка - " << penPrice << " рублей\n";
    cout << "Введите количество ручек: ";
    cin >> penKOL;

    double totalCost = penKOL * penPrice;
    if (penKOL > 0 && totalCost > budget) {
        cout << "Недостаточно средств для покупки ручек. Завершение программы.\n";
        exit(0); // Завершение программы
    }
    budget -= totalCost; // Вычитаем стоимость из бюджета
}
#endif
