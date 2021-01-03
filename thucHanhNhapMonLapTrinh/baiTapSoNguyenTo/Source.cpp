#include "Header.h"

bool testSoNguyenTo(int n) {
  if (n < 2) {
    return false;
  }
  int count = 0;
  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      count++;
    }
  }
  if (count == 0) {
    return true;
  } else {
    return false;
  }
}

void listSoNguyenToNhoHon(int n) {
  cout << "Cac so nguyen to nho " << n << " la ";
  for (int i = 1; i < n; i++) {
    if (testSoNguyenTo(i) == true) {
      cout << i << ", ";
    }
  }
}

void countSoNguyenToNhoHon(int n) {
  int count = 0;

  for (int i = 1; i < n; i++) {
    if (testSoNguyenTo(i) == true) {
      count++;
    }
  }
  cout << "\nSo nguyen to nho hon " << n << " co " << count << " so" << endl;
}

void sumSoNguyenToNhoHon(int n) {
  int sum = 0;

  for (int i = 1; i < n; i++) {
    if (testSoNguyenTo(i) == true) {
      sum += i;
    }
  }
  cout << "\nTong cac so nguyen to nho hon " << n << " la " << sum << endl;
}

void multiplySoNguyenToNhoHon(int n) {
  int multiply = 1;

  for (int i = 1; i < n; i++) {
    if (testSoNguyenTo(i) == true) {
      multiply *= i;
    }
  }
  cout << "\nTich cac so nguyen to nho hon " << n << " la " << multiply << endl;
}
