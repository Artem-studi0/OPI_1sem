#include <iostream>
#include <cmath>  // для функции sqrt()

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double x1, y1, x2, y2;  // координаты точек
    double distance;        // расстояние между точками

    // Ввод координат первой точки M1(x1, y1)
    cout << "Введите координаты первой точки (x1, y1): ";
    cin >> x1 >> y1;

    // Ввод координат второй точки M2(x2, y2)
    cout << "Введите координаты второй точки (x2, y2): ";
    cin >> x2 >> y2;

    // Вычисление расстояния по формуле
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Вывод результата
    cout << "Расстояние между точками M1 и M2: " << distance << endl;

    return 0;
}
