#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v;

    if (n <= 1) {
        v.push_back(n);
    } else {
        do {
            v.push_back(n % 2);
            n /=2;
        }
        while (n >= 1);
    }
    for (int i = v.size() - 1; i >= 0; --i) {
        cout << v[i];
    }
    return 0;
}
