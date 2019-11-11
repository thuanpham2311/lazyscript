#include <cmath>
#include <iostream>
using namespace std;

#define ll long long

struct SACH {
  char ten[50];
  char ma[10];
  int gia;
  int nam;
};

void nhapSach(SACH &sach);
void xuatSach(SACH sach);
void nhapDanhSachSach(SACH a[], int n);
void xuatDSSach2020(SACH a[], int n);
void xuatDSSachGiaFrom100kTo300k(SACH a[], int n);
void xuatDSSachMaT(SACH a[], int n);
void xuatSachMaTH001(SACH a[], int n);
