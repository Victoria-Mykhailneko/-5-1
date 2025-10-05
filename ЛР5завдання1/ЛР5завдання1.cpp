#include <iostream>
#include <cmath>     
using namespace std;

int main() {
    double e = 0.001;    
    double a, sum = 0;   
    int n = 1;

    do {
        a = pow(-1, n + 1) * sin(n) / (n * n);
        sum += a;
        n++;
    } while (fabs(a) >= e);  // fabs — модуль числа з плаваючою крапкою

    cout << "Сума членів послідовності: " << sum << endl;
    cout << "Кількість доданих членів: " << n - 1 << endl;
    return 0;
}

