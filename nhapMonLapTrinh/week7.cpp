/**
 *     Author: Nicholas Pham (Phạm Tấn Thuận | DH51902283)
 *     Created: Mon 01 Jun 2020 06:29:34 PM +07
 **/
// README:
// # See the latest update at:
// https://github.com/thuanpham2311/lazyscript/blob/master/nhapMonLapTrinh/phamTanThuanDH51902283_nhapMonLapTrinh_week7.cpp
//
// NOTE:
// 1. Viết hàm tính n!
// 2. Viết hàm giải phương trình bậc 2 : ax 2 + bx + c = 0
// 3. Viết hàm xét số nguyên n có phải là số nguyên tố không?
//
#include <cmath>
#include <iostream>
using namespace std;

void ex1() {
  int n, s = 1;

  cout << "n! = ? \n n = ";
  cin >> n;

  for (int i = n; i > 0; i--) {
    s *= i;
  }

  cout << n << "! = " << s << endl;
}

void ex2() {
  int a, b, c;
  float x_1, x_2;
  // https://en.wikipedia.org/wiki/Quadratic_equation

  cout << "ax^2 + bx + c = 0" << endl;
  cout << "a = ";
  cin >> a;
  cout << "b = ";
  cin >> b;
  cout << "c = ";
  cin >> c;

  if (a == 0) {
    cout << "Don't enter number 0 dude" << endl;
    cout << "Run this program again" << endl;
  } else {
    x_1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    x_2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    cout << "x_1 is " << x_1 << endl;
    cout << "x_2 is " << x_2 << endl;
  }
}

void ex3() {
  int n;
  cout << "Enter n = ";

  cin >> n;

  if (n < 2) {
    cout << "không phải số nguyên tố" << endl;
  }

  int count = 0;
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      count++;
    }
  }

  if (count == 0) {
    cout << "số nguyên tố" << endl;
  } else {
    cout << "Không phải số nguyên tố" << endl;
  }
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

  cout << "\n\n Exercise 1a" << endl;
  ex1();

  cout << "\n\n Exercise 1b" << endl;
  ex2();

  cout << "\n\n Exercise 2a" << endl;
  ex3();

  return 0;
}
