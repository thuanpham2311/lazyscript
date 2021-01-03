/**
 *     Author: Nicholas Pham (Phạm Tấn Thuận | DH51902283)
 *     Created: Fri 24 Apr 2020 11:40:16 AM +07
 **/
// README:
// # See the latest update at:
// https://github.com/thuanpham2311/lazyscript/blob/master/nhapMonLapTrinh/phamTanThuanDH51902283_nhapMonLapTrinh_week2.cpp
//
//
// NOTE:
// 1. Nhập vào 2 số nguyên a, b. Tính tổng, hiệu, thương và tích 2 số đó.
// 2. Nhập tên sản phẩm, số lượng và đơn giá. Tính tiền và thuế giá trị gia tăng
// phải trả, biết: a. Tiền = số lượng * đơn giá b. Thuế giá trị gia tăng = 10% *
// tiền
// 3. Nhập điểm thi và hệ số 3 môn: Toán, lý, hóa của một sinh viên. Tính điểm
// trung bình của sinh viên đó.
// 4. Nhập bán kính của đường tròn. Tính chu vi và diện tích của hình tròn.
// 5. Nhập vào số xe (gồm 4 chữ số) của bạn. Cho biết số xe của bạn được mấy
// nút? Hướng dẫn: ta dùng toán tử % và / để lấy các ký số của số xe. VD: int
// a=1234; int b=a%10; //b = 4 a=a/10; //a= 123
// 6. Viết chương trình giải phương trình bậc 1: ax + b = 0
// Hướng dẫn: nếu a ==0 thì phép chia b/a sẽ bị lỗi. Vì thế, chúng ta dùng if để
// xét: nếu a==0 thì xuất ra dòng chữ “không chia cho số 0”, ngược lại xuất ra
// nghiệm của phương trình.
// 7. Viết chương trình giải phương trình bậc 2: ax 2 + bx + c = 0
// Hướng dẫn: dùng hàm sqrt(x) để lấy căn bậc 2 của x.
// VD:
// int a = 4;
// int b = sqrt(a); // b = 2
//
//
// TODO:
// [x] ex1
// [x] ex2
//    [] produceName input a string?
// [x] ex3
//    [] round num?
// [x] ex4
// [x] ex5
// [x] ex6
// [x] ex7

#include <cmath>
#include <iostream>
using namespace std;

void ex1() {
  int a, b;

  cout << "Enter a, b" << endl;
  cout << "a = ";
  cin >> a;
  cout << "b = ";
  cin >> b;

  cout << "a + b = " << a + b << endl;
  cout << "a - b = " << a - b << endl;
  cout << "a * b = " << a * b << endl;
  cout << "a / b = " << a / b << endl;
}

void ex2() {
  char productName[100];
  int amount, price, money, tax;

  cout << "Enter product name: ";
  cin >> productName;
  cout << productName << endl;
  cout << "how many?"
       << "\n = ";
  cin >> amount;
  cout << productName << endl;
  cout << "how much? ($)"
          "\n = ";
  cin >> price;

  money = amount * price;
  cout << "money = " << money << "$" << endl;

  tax = 0.1 * money;
  cout << "tax (10%) = " << tax << "$" << endl;
}

void ex3() {
  float math, phy, chem;

  cout << "Enter your score math, phy and chem" << endl;
  cout << "math = ";
  cin >> math;
  cout << "phy = ";
  cin >> phy;
  cout << "chem = ";
  cin >> chem;

  cout << "adv = " << (math + phy + chem) / 3 << endl;
}

void ex4() {
  int R, area, circumference;
  // C = 2*pi*r
  // A = pi*r**2

  double PI = 3.14159265359;

  cout << "Radius = ";
  cin >> R;

  area = PI * R * R;
  cout << "Area is " << area << endl;

  circumference = 2 * PI * R;
  cout << "Circumference  is " << circumference << endl;
}

void ex5() {
  int carNumber, num_1, num_2, num_3, num_4, result;

  cout << "Enter your car number (just 4 number) \n \t Car number = ";
  cin >> carNumber;

  num_1 = carNumber % 10;
  num_2 = carNumber / 10 % 10;
  num_3 = carNumber / 100 % 10;
  num_4 = carNumber / 1000 % 10;

  result = num_1 + num_2 + num_3 + num_4;

  cout << "Sum each your number is " << result << endl;
}

void ex6() {
  int a, b, x;
  // ax + b = 0 => x = -b / a

  cout << "ax + b = 0" << endl;
  cout << "a = ";
  cin >> a;
  cout << "b = ";
  cin >> b;

  if (a == 0) {
    cout << "Don't enter number 0 dude" << endl;
    cout << "Run this program again" << endl;
  } else {
    x = -b / a;
    cout << "x is " << x << endl;
  }
}

void ex7() {
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

int main() {
  cout << "_____________" << endl;
  cout << "< Yo! dudes >" << endl;
  cout << "-------------" << endl;
  cout << "  |  ^__^" << endl;
  cout << "   - (oo)|_______  #" << endl;
  cout << "     (__)|       )/" << endl;
  cout << "         ||----w |" << endl;
  cout << "         ||     ||" << endl;

  cout << "\n\n Exercise 1" << endl;
  ex1();

  cout << "\n\n Exercise 2" << endl;
  ex2();

  cout << "\n\n Exercise 3" << endl;
  ex3();

  cout << "\n\n Exercise 4" << endl;
  ex4();

  cout << "\n\n Exercise 5" << endl;
  ex5();

  cout << "\n\n Exercise 6" << endl;
  ex6();

  cout << "\n\n Exercise 7" << endl;
  ex7();
  return 0;
}
