#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;
    if (a <= b && a <= c) {
        cout << a;
    }
    else if (b <= a && b <= c) {
        cout << b;
    }
    else if (c <= a && c <= b) {
        cout << c;
    }
    else {
        cout << "something went wrong";
    }
    return 0;
}
