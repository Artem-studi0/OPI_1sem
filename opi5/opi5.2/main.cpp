#include <iostream>


using namespace std;

int main() {
    setlocale(LC_ALL, "russian");
    double budget;
    double breadPrice = 50;
    double shirtPrice = 300;
    double penPrice = 20;
    int breadKOL, shirtKOL, penKOL;

   
    cout << "Введите ваш бюджет: ";
    cin >> budget;
   cout << "Магазин 1:\n";
   cout << "1. Хлеб - " << breadPrice << " рублей\n";
   cout << "Введите количество хлеба: ";
   cin >> breadKOL;

   if (breadKOL > 0 && (breadKOL * breadPrice) > budget) {
       cout << "Недостаточно средств для покупки хлеба. Завершение программы.\n";
       return 0;
   }
   cout << "Магазин 2:\n";
   cout << "1. одежда - " << shirtPrice << " рублей\n";
   cout << "Введите количество хлеба: ";
   cin >> shirtKOL;

   if (shirtKOL > 0 && (shirtKOL * shirtPrice) > budget) {
       cout << "Недостаточно средств для покупки хлеба. Завершение программы.\n";
       return 0;
   }
    cout << "3. Ручка - " << penPrice << " рублей\n";
    cout << "Введите количество ручек: ";
    cin >> penKOL;

    
    double totalCost = (breadKOL * breadPrice) + (shirtKOL * shirtPrice) + (penKOL * penPrice);

    
    if (totalCost <= budget) {
        cout << "Покупка подтверждена. Общая стоимость: " << totalCost << " рублей.\n";
        budget -= totalCost;
        cout << "Оставшаяся сумма: " << budget << " рублей.\n";
    }
    else {
        cout << "Недостаточно средств для покупки. Общая стоимость: " << totalCost << " рублей.\n";
    }

    return 0;
}
