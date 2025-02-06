#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "russian");
    int a1 = 0, b1 = 0, raz = 0, in=0;
    char a, b;
    cout << "ВЫБОР ИЗ 3";
    cin >> in;
    switch (in)
    {
    case 1: {
        cout << "english";
        cin >> a >> b;
        a1 = char(a);
        b1 = char(b);
        raz = b1 - a1;
        cout << "Raz = " << raz;
        break;
    }
    case 2: {
        cout << "русские";
        cin >> a >> b;
        a1 = char(a);
        b1 = char(b);
        raz = b1 - a1;
        cout << "Razn = " << raz;
        break;
    }
    case 3: {
        cout << "цифра ";
        cin >> a;
        a1 = char(a);
        cout << "a1 = " << a1;
        break;
    }
    case 4: {
        break;
    }
    default: {
        cout << "введите норм ! ";
        break;
    }
    }
    return 0;
}

