/**
 *     Author: Nicholas Pham (Phạm Tấn Thuận | DH51902283)
 *     Created: Mon 01 Jun 2020 05:58:22 PM +07
 **/
// README:
// # See the latest update at:
// https://github.com/thuanpham2311/lazyscript/blob/master/thucHanhNhapMonLapTrinh/baiTap1THNMLT.cpp
//
//
// NOTE:
// nhap n, e.g 2344, sum 2, 4, 4 => ok

#include <iostream>
using namespace std;

int main() {
  cout << "_____________" << endl;
  cout << "< Yo! dudes >" << endl;
  cout << "-------------" << endl;
  cout << "  |  ^__^" << endl;
  cout << "   - (oo)|_______  #" << endl;
  cout << "     (__)|       )/" << endl;
  cout << "         ||----w |" << endl;
  cout << "         ||     ||" << endl;

  int n, sum = 0;

  cout << "Enter n = ";
  cin >> n;

  // nguyen duong n dung do while kiem tra n > 0

  int r = 0;
  while (n > 0) {
    r = n % 10;
    if (r % 2 == 0) {
      sum += r;
    }
    n /= 10;
  }

  cout << "\n Sum = " << sum << endl;

  return 0;
}
