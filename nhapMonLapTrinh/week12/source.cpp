#include "header.h"

void nhapSach(SACH &sach) {
  cin.ignore();
  cout << "Nhap ten: ";
  cin.getline(sach.ten, 50);
  cout << "Nhap ma: ";
  cin >> sach.ma;
  cout << "Nhap gia: ";
  cin >> sach.gia;
  cout << "Nhap nam: ";
  cin >> sach.nam;
}

void xuatSach(SACH sach) {
  cout << endl;

  cout << "Ten sach: " << sach.ten << endl;
  cout << "Ma: " << sach.ma << endl;
  cout << "Gia: " << sach.gia << endl;
  cout << "Nam: " << sach.nam << endl;

  cout << endl;
}

void nhapDanhSachSach(SACH *a, int n) {
  for (int i = 0; i < n; i++) {
    cout << "Nhap sach thu " << i << ":" << endl;
    nhapSach(a[i]);
  }
}

void xuatDSSach2020(SACH *a, int n) {
  for (int i = 0; i < n; i++) {
    if (a[i].nam == 2020) {
      xuatSach(a[i]);
    }
  }
}

void xuatDSSachGiaFrom100kTo300k(SACH *a, int n) {
  for (int i = 0; i < n; i++) {
    if (a[i].gia >= 100000 && a[i].gia <= 300000) {
      xuatSach(a[i]);
    }
  }
}

void xuatDSSachMaT(SACH *a, int n) {
  for (int i = 0; i < n; i++) {
    if (a[i].ma[0] == 'T') {
      xuatSach(a[i]);
    }
  }
}

void xuatSachMaTH001(SACH *a, int n) {
  for (int i = 0; i < n; i++) {
    if (a[i].ma[0] == 'T' && a[i].ma[1] == 'H' && a[i].ma[2] == '0' &&
        a[i].ma[3] == '0' && a[i].ma[4] == '1') {
      xuatSach(a[i]);
    }
  }
}
