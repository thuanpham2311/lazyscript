// NOTE:
// # See the latest update at:
// https://github.com/thuanpham2311/lazyscript/blob/master/nhapMonLapTrinh/phamTanThuanDH51902283_nhapMonLapTrinh_week4.cpp
//
// 1. Viết chương trình nhập vào số nguyên n. Tính tổng các ký số của n. VD: n =
// 12345 =&gt; tổng các ký số = 1+2+3+4+5 = 15
// 2. Viết chương trình tìm ước số chung lớn nhất của 2 số a, b.
// 3. Viết chương trình tìm bội số chung nhỏ nhất của 2 số a, b.
// 4. Viết chương trình kiểm tra số nguyên n có phải là số nguyên tố không? Biết
// số nguyên tố là số &gt;= 2 và chỉ chia hết cho 1 và cho chính nó, các số
// nguyên tố là 2, 3, 5, 7, 11, 13 ..... VD: nhập n = 11 =&gt; xuất kết quả: 11
// là số nguyên tố.
// TODO:
// [x] ex1
// [x] ex2
// [x] ex3
// [x] ex4

#include <cmath>
#include <iostream>
using namespace std;

void ex1() {
  int n, r, sum = 0;

  cout << "Enter Your number" << endl;
  cout << "\t = ";
  cin >> n;

  for (; n > 0;) {
    r = n % 10;
    sum += r;
    n /= 10;
  }

  cout << "Sum = " << sum;
}

void ex2() {
  int a, b, UCLN;

  cout << "Enter a ";
  cin >> a;
  a = abs(a);
  cout << "Enter b ";
  cin >> b;
  b = abs(b);
  // Cach 2: min(a,b) for giam min = 1 a,b % i == 0 => ok
  if (a == 0 && b == 0) {
    cout << "không có ước chung lớn nhất" << endl;
  } else {
    while (a != b) {
      if (a > b) {
        UCLN = a - b;
      } else {
        UCLN = b - a;
      }
    }
    UCLN = b;
  }

  cout << "UCLN = " << UCLN << endl;
}

void ex3() {
  int a, b;
  int UCLN, BCNN;
  int A = 0, B = 0;

  cout << "Enter a ";
  cin >> a;
  a = abs(a);
  A = a;
  cout << "Enter b ";
  cin >> b;
  b = abs(b);
  B = b;

  if (a == 0 && b == 0) {
    cout << "không có bội chung nhỏ nhất" << endl;
  } else {
    while (a != b) {
      if (a > b) {
        a -= b;
      } else {
        b -= a;
      }
    }
    UCLN = a;
  }

  if (UCLN != 0) {
    BCNN = (A * B) / UCLN;
    cout << "BCNN = " << BCNN << endl;
  }
}

void ex4() {
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
  cout << "   - (**)|_______  #" << endl;
  cout << "     (__)|       )/" << endl;
  cout << "         ||----w |" << endl;
  cout << "         ||     ||" << endl;

  // cout << "\n\n Exercise 1" << endl;
  // ex1();

  // cout << "\n\n Exercise 2" << endl;
  // ex2();

  // cout << "\n\n Exercise 3" << endl;
  // ex3();

  cout << "\n\n Exercise 4" << endl;
  ex4();

  return 0;
}
