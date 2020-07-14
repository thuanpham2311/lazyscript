#include <iostream>
using namespace std;

int main() {
    int n;
    int count = 0;
    cout << "Enter n = ";
    cin >> n;

    if (n < 2 || n > 100) {
        cout << n << " khong la so nguyen to" << endl;
        return 0;
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                count++;
            }
    }
    }

    if ( count == 0 ) {
        cout << n << " la so nguyen to" << endl;
    } else {
        cout << n << " khong la so nguyen to" << endl;
    }

    return 0;
}
