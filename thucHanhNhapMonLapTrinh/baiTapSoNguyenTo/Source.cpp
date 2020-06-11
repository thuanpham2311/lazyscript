#include "Header.h"

int testSoNguyenTo(int n) {
	int count = 0; 
	
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			count++;
		}
	}
	return count; // count == 2 is right
}

void listSoNguyenToNhoHon(int n) {
	cout << "Cac so nguyen to nho " << n << " la ";
	for (int i = 1; i < n; i++) {
		if (testSoNguyenTo(i) == 2) {
			cout << i << ", ";
		}
	}
}

void countSoNguyenToNhoHon(int n) {
	int count = 0;

	for (int i = 1; i < n; i++) {
		if (testSoNguyenTo(i) == 2) {
			count++;
		}
	}
	cout << "\nSo nguyen to nho hon " << n << " co " << count << " so" << endl;
}

void sumSoNguyenToNhoHon(int n) {
	int sum = 0;

	for (int i = 1; i < n; i++) {
		if (testSoNguyenTo(i) == 2) {
			sum += i;
		}
	}
	cout << "\nTong cac so nguyen to nho hon " << n << " la " << sum << endl;
}

void multiplySoNguyenToNhoHon(int n) {
	int multiply = 1;

	for (int i = 1; i < n; i++) {
		if (testSoNguyenTo(i) == 2) {
			multiply *= i;
		}
	}
	cout << "\nTich cac so nguyen to nho hon " << n << " la " << multiply << endl;
}