#include <iostream>
using namespace std;

int main() {
    int n;
    bool ok;
    cout << "Enter n = ";
    cin >> n;

    for (int i = 1; i < n; i++) {
        if (i*i == n) {
            ok = true;
        }
    }

    if (ok == true) {
        cout << n << " la so chinh phuong" << endl;
    } else {
        cout << n << " khong la so chinh phuong" << endl;
    }
    return 0;
}
