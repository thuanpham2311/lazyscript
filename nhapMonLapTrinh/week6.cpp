// README:
// # See the latest update at:
// https://github.com/thuanpham2311/lazyscript/blob/master/nhapMonLapTrinh/phamTanThuanDH51902283_nhapMonLapTrinh_week6.cpp
// NOTE:
// 1. Nhập vào chiều cao của hình tam giác và xuất :
// a. Hình tam giác đặc
// VD: Nhập h = 4. Xuất:
// *
// **
// ***
// ****
// b. Hình tam giác rỗng
// VD: Nhập h = 4. Xuất:
// *
// **
// * *
// ****
// 2. Nhập vào chiều dài và chiều rộng của hình chữ nhật và xuất :
// a. Hình hình chữ nhật đặc
// VD: Nhập dài = 4, rộng = 6. Xuất:
// ******
// ******
// ******
// ******
// b. Hình hình chữ nhật rỗng
// VD: Nhập dài = 4, rộng = 6. Xuất:
// ******
// *    *
// *    *
// ******
// TODO:
// [x] ex1a
// [x] ex1b
// [x] ex2a
// [x] ex2b
#include <iostream>
using namespace std;

void ex1a() {
  int H, count = 0;

  cout << "Enter H = ";
  cin >> H;

  for (int i = 0; i <= H; i++) {
    for (int i = 1; i <= count; i++) {
      cout << "*";
    }
    cout << "\n";
    count++;
  }
}

void ex1b() {
  int H, count = 0;

  cout << "Enter H = ";
  cin >> H;

  // I don't know what I'm doing, it works
  for (int i = 0; i <= H; i++) {
    if (count == 1) {
      cout << "*";
    } else if (count == 2) {
      cout << "**";
    } else if (H == count) {
      for (int i = 1; i <= count; i++) {
        cout << "*";
      }
    } else if (count > 2 && count != H) {
      // string(count - 2) => from count = 3, plus whitespace?
      cout << "*" << string(count - 2, ' ') << "*";
    }
    cout << "\n";
    count++;
  }
}

void ex2a() {
  int H, W;

  cout << "Enter H = ";
  cin >> H;
  cout << "Enter W = ";
  cin >> W;

  for (int i = 1; i <= H; i++) {
    for (int i = 1; i <= W; i++) {
      cout << "*";
    }
    cout << "\n";
  }
}

void ex2b() {
  int H, W, count = 0;

  cout << "Enter H = ";
  cin >> H;
  cout << "Enter W = ";
  cin >> W;

  // I don't know what I'm doing, it works
  for (int i = 1; i <= H; i++) {
    if (count == 0 || count == H - 1) {
      for (int i = 1; i <= W; i++) {
        cout << "*";
      }
    } else if (W > 2 && count != H) {
      cout << "*" << string(W - 2, ' ') << "*";
    }
    cout << "\n";
    count++;
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
  ex1a();

  cout << "\n\n Exercise 1b" << endl;
  ex1b();

  cout << "\n\n Exercise 2a" << endl;
  ex2a();

  cout << "\n\n Exercise 2b" << endl;
  ex2b();

  return 0;
}
