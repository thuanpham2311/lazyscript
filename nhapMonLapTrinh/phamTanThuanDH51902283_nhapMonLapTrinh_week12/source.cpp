#include "header.h"

void nhapSach(SACH &sach) {
    cout << "Nhap ten: ";
    cin.getline(sach.ten, 50);
    cin.ignore();
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
    cout << "Ten ma: " << sach.ma << endl;
    cout << "Ten gia: " << sach.gia << endl;
    cout << "Ten nam: " << sach.nam << endl;

    cout << endl;
}

void nhapDanhSachSach(SACH a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap sach thu " << i << ":" << endl;
        nhapSach(a[i]);
    }
}
