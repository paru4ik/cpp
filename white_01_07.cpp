#include <iostream>
#include <string>

using namespace std;

int main() {
    string a;
    cin >> a;
    
    int count = -2;

    for (int i = 0; i <= a.size(); ++i) {
        if (a[i] == 'f') {
            ++count; 
            if (count == 0) {
                cout << i << endl;
            }
        }
    }
    
    if (count < 0) {
        cout << count << endl;
    }
    
    return 0;
}
