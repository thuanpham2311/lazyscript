// README:
// # See the latest update at:
// https://github.com/thuanpham2311/lazyscript/blob/master/nhapMonLapTrinh/phamTanThuanDH51902283_nhapMonLapTrinh_week5.cpp
// NOTE:
// 1. Tính biểu thức :
// S= 1/1! + 1/2! + 1/3! + ... 1/n!
// 2. Nhập 1 số, in ra số đảo ngược.
// 3. Xuất số fibonacci thứ n, biết số fibonacci là số:
// F(0) = 1
// F(1) =1
// F(i) = F(i-1) + F(i-2)
// VD dãy fibonacci có các số : 1 1 2 3 5 8 13 21 34 ...
// TODO:
// [x] ex1
// [x] ex2
// [x] ex3

#include <iostream>
using namespace std;

void ex1() {
  int n, i = 1;
  double sum;

  cout << "S= 1/1! + 1/2! + 1/3! + ... 1/n!" << endl;
  cout << "Enter n = ";
  cin >> n;

  for (int j = 1; j <= n; j++) {
    i *= j;
    sum += (double)1 / i;
  }
  cout << "S = " << sum;
}

void ex2() {
  int n, r;

  cout << "Reverse number \"n\"" << endl;
  cout << "Enter n = ";
  cin >> n;

  for (int counter = 0; n > 0; counter++) {
    r = n % 10;
    if (counter == 0) {
      cout << "Reversed number : ";
    }
    cout << r;
    n /= 10;
  }
}

void ex3() {
  int n, f;
  int f1 = 1, f2 = 1;

  cout << "F(n) = ?" << endl;
  cout << "Enter n = ";
  cin >> n;

  if (n == 1 || n == 2) {
    f = 1;
  } else {
    int i = 3;
    while (i <= n) {
      f = f1 + f2;
      f1 = f2;
      f2 = f;
      i++;
    }
  }
  cout << "F(" << n << ") = " << f;
}

int main() {
  cout << "_____________" << endl;
  cout << "< Yo! dudes >" << endl;
  cout << "-------------" << endl;
  cout << "  |  ^__^" << endl;
  cout << "   - (oo)|_______  #" << endl;
  cout << "     (__)|       )/" << endl;
  cout << "         ||----w |" << endl;
  cout << "         ||     ||" << endl;

  // cout << "\n\n Exercise 1" << endl;
  // ex1();

  // cout << "\n\n Exercise 2" << endl;
  // ex2();

  cout << "\n\n Exercise 3" << endl;
  ex3();
  return 0;
}
