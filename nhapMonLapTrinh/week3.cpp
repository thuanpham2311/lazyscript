/**
 *     Author: Nicholas Pham (Phạm Tấn Thuận | DH51902283)
 *     Created: Sat 09 May 2020 09:27:29 PM +07
 **/
// README:
// # See the latest update at:
// https://github.com/thuanpham2311/lazyscript/blob/master/nhapMonLapTrinh/phamTanThuanDH51902283_nhapMonLapTrinh_week3.cpp
//
//
// NOTE:
// 1. Viết chương trình nhập vào 3 số thực a, b, c. Tìm số lớn nhất và nhỏ nhất
// trong 3 số a, b, c.
// 2. Viết chương trình nhập vào số nguyên n, tính :
// a. S= 1 – 2 + 3 – 4 + 5 - .... ± n
// b. s = 1^2/2! + 2^3/3! + 3^4/4! + 4^5/5!
// 3. Viết chương trình nhập vào 2 số nguyên dương x, y. Tính x^y .
//
//
// TODO:
// [x] ex1
// using if
// [ ] ex2
//      [x] ex2.a
// -= 1 += 1 to X
//      [x] ex2.b
// eg. x = 10, 1=>10 = 10bit.
// [x] ex3
// ??? cin x, y? solve = x**Y(python) cpp?

#include <cmath>
#include <iostream>
using namespace std;

void ex1() {
  int a, b, c;

  cout << "enter a, b, c" << endl;
  cin >> a >> b >> c;

  if (a > b && a > c) {
    cout << "max is " << a << endl;
  } else if (b > c) {
    cout << "max is " << b << endl;
  } else {
    cout << "max is " << c << endl;
  }
}

void ex2a() {
  int n, sum = 0, op = 1;
  cout << "Enter n = ";
  cin >> n;

  for (int i = 1; i <= n; i++) {
    sum = sum + (op * i);
    op = op * -1;
  }
  cout << "Sum = " << sum << endl;
}

void ex2b() {
  int n, gt;
  float sum = 0;
  cout << "Enter n = ";
  cin >> n;

  for (int i = 1; i <= n; i++) {
    gt *= i;
    sum += pow(i, i + 1) / (float)(gt * (i + 1));
  }
  cout << "Sum = " << sum;
}

void ex3() {
  int x, y, s;
  cout << "x^y = ?" << endl;
  cout << "x = ";
  cin >> x;
  cout << "y = ";
  cin >> y;

  for (int i = 1; i <= y; i++) {
    s = y * x;
  }
  cout << "x^y = " << s << endl;
}

int main() {
  cout << "_____________" << endl;
  cout << "< Yo! dudes >" << endl;
  cout << "-------------" << endl;
  cout << "  |  ^__^" << endl;
  cout << "   - (**)|_______  #" << endl;
  cout << "     (__)|       )/" << endl;
  cout << "         ||----w |" << endl;
  cout << "         ||     ||" << endl;

  cout << "\n\n Exercise 1" << endl;
  ex1();

  cout << "\n\n Exercise 2.a" << endl;
  ex2a();

  cout << "\n\n Exercise 2.b" << endl;
  ex2b();

  cout << "\n\n Exercise 3" << endl;
  ex3();

  return 0;
}
