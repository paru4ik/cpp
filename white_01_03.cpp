#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double x1, x2, d;
    d = b * b - 4 * a * c;
    // проверим, что уравнение не линейное (коэффициент а не равен 0)
    if (a != 0) {
        // корней уравнения два
        if (d > 0) {
            x1 = (-b + sqrt(d)) / 2 / a;
            x2 = (-b - sqrt(d)) / 2 / a;
            cout << x1 << " " << x2;
        // корень один
        } else if (d == 0) {
            x1 = (double) -b / 2 / a;
            cout << x1;
        // корней нет вообще
        } else {
            cout << "";
        }
    // в случае если уравнение сводится к линейному
    } else {
        if (b != 0) {
            x1 = (double) -c / b;
            cout << x1;
        } else {
            cout << "";        
        }
    }
    return 0;
} 
