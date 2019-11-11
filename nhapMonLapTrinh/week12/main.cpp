#include "header.h"

int main() {
  SACH a[100];
  int n;

  cout << "Nhap so luong sach: ";
  cin >> n;
  nhapDanhSachSach(a, n);

  cout << "Cac quyen sach xuat ban nam 2020:" << endl;
  xuatDSSach2020(a, n);

  cout << "Cac quyen sach co gia 100K toi 300K:" << endl;
  xuatDSSachGiaFrom100kTo300k(a, n);

  cout << "Cac quyen sach co ma bat dau bang T la:" << endl;
  xuatDSSachMaT(a, n);

  cout << "Sach co ma \"TH001\" la:";
  xuatSachMaTH001(a, n);
  return 0;
}
