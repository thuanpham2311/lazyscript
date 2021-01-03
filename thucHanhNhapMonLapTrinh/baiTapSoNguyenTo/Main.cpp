#include "Header.h"

int main() {
  int n;
  cout << "Enter n = ";
  cin >> n;

  int result = testSoNguyenTo(n);
  if (result == true) {
    cout << n << " la so nguyen to" << endl;
  } else {
    cout << n << " khong la so nguyen to" << endl;
  }

  listSoNguyenToNhoHon(n);
  countSoNguyenToNhoHon(n);
  sumSoNguyenToNhoHon(n);
  multiplySoNguyenToNhoHon(n);
  // system("pause");
  return 0;
}
