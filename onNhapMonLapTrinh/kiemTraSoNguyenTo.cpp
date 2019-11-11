#include <iostream>
using namespace std;
// https://vi.wikipedia.org/wiki/S%E1%BB%91_nguy%C3%AAn_t%E1%BB%91#:~:text=C%C3%A1c%20s%E1%BB%91%20nguy%C3%AAn%20t%E1%BB%91%20t%E1%BB%AB%202%20%C4%91%E1%BA%BFn%20100%3A,%2C%2083%2C%2089%2C%2097.

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

  if (count == 0) {
    cout << n << " la so nguyen to" << endl;
  } else {
    cout << n << " khong la so nguyen to" << endl;
  }

  return 0;
}
