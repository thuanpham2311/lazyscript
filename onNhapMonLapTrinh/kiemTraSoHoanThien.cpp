#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter n = ";
    cin >> n;

    for (int i = 1; i < n; i++) {
        if ( n % i == 0 ) {
            sum += i;
        }
    }

    if (sum == n) {
        cout << n << " la so hoang thien" << endl;
    } else {

        cout << n << " khong la so hoang thien" << endl;
    }

    return 0;
}
