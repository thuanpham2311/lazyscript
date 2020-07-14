#include "header.h"

void nhapMang(int a[100], int &n) {

    cout << "Nhap Mang" << endl;
    cout << "n = ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}
bool kiemTraSoChinhPhuong(int n) {
    for (int i = 1; i < n; i++) {
        if (i*i == n) {
            return true;
        }
    }
    return false;
}

void xuatSoChinhPhuongNhoNhatTrongMang(int a[100], int n) {
    cout << "Cac so chinh phuong nho nhat trong mang la: " << endl;
    for (int i = 0; i < n; i++) {
        if (kiemTraSoChinhPhuong(a[i]) == true) {
            cout << "a[" << i << "] = ";
            cout << a[i] << endl;
        }
    }
}
