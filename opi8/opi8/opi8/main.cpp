#include <iostream>
using namespace std;
int getSum(int x, int y) {
    return x + y;  // Реализация функции сложения
}
int getMul(int x, int y) {
    return x * y;  // Реализация функции умножения
}
int main(int argc, char* argv[]) {
    int parm1 = 5;
    for (int i = 0; i < 5; i++) {
        int parm2 = parm1 + i;
        int Result_GetSum = getSum(parm1, parm2);
        std::cout << "i= " << i << endl;
        std::cout << "getSum(" << parm1 << "," << parm2 << ")=" << Result_GetSum << std::endl;
    }
    int Result_GetMul = getMul(2, 3);
    std::cout << "getMul(2, 3)=" << Result_GetMul << std::endl;

    system("pause");
    return 0;
}
