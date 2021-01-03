// README:
// # See the latest update at:
// https://github.com/thuanpham2311/lazyscript/blob/master/nhapMonLapTrinh/phamTanThuanDH51902283_nhapMonLapTrinh_week9.cpp
#include <iostream>
using namespace std;

void arrIn(int in[], int &n) {
  cout << "Ban muon nhap bao nhieu so: ";
  cin >> n;
  cout << "nhap so tai day: \n";
  for (int i = 0; i < n; i++) {
    cout << "arr[" << i << "] = ";
    cin >> in[i];
  }
}

void arrOut(int in[], int n) {
  cout << "cac gia tri cua mang la: \n";
  for (int i = 0; i < n; i++) {
    cout << "arr[" << i << "] = " << in[i];
  }
}

void sumArr(int in[], int n) {
  // TODO: user don't type int type? => die
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += in[i];
  }
  cout << "Tong cua mang la: " << sum << endl;
}

void whereX(int in[], int n) {
  // dont need, use return if use int func
  bool F = false;
  int x;

  cout << "Kiem tra trong mang co"
          " gia tri = x hay khong?"
       << endl;
  cout << "Gia tri x = ";
  cin >> x;
  for (int i = 0; i < n; i++) {
    if (in[i] == x) {
      F = true;
    }
  }

  if (F == true) {
    cout << "mang co gia tri = " << x << endl;
  } else {
    cout << "mang khong co gia tri = " << x << endl;
  }
}

void maxArr(int in[], int n) {
  int MAX;

  for (int i = 0; i < n - 1; i++) {
    if (in[i] > in[i + 1]) {
      MAX = in[i];
    } else {
      MAX = in[i + 1];
    }
  }

  cout << "So lon nhat trong mang la " << MAX << endl;
}

void countArr(int in[], int n) {
  int count = 0;

  for (int i = 0; i < n; i++) {
    if (in[i] % 2 == 0) {
      count++;
    }
  }

  cout << "So phan tu chan trong mang = " << count << endl;
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

  int in[100], n;

  arrIn(in, n);
  arrOut(in, n);

  sumArr(in, n);

  whereX(in, n);

  maxArr(in, n);

  countArr(in, n);

  return 0;
}
