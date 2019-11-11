#include <iostream>
using namespace std;
// https://vi.wikipedia.org/wiki/S%E1%BB%91_ch%C3%ADnh_ph%C6%B0%C6%A1ng#:~:text=S%E1%BB%91%20ch%C3%ADnh%20ph%C6%B0%C6%A1ng%20hay%20c%C3%B2n,c%E1%BA%A1nh%20b%E1%BA%B1ng%20s%E1%BB%91%20nguy%C3%AAn%20kia.

int main() {
  int n;
  bool ok;
  cout << "Enter n = ";
  cin >> n;

  for (int i = 1; i < n; i++) {
    if (i * i == n) {
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
