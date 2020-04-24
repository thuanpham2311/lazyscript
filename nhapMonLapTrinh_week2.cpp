/**
 *     Author: Phạm Tấn Thuận | DH51902283
 *     Created: Fri 24 Apr 2020 11:40:16 AM +07
**/
// README:
// 1. Nhập vào 2 số nguyên a, b. Tính tổng, hiệu, thương và tích 2 số đó.
// 2. Nhập tên sản phẩm, số lượng và đơn giá. Tính tiền và thuế giá trị gia tăng phải trả, biết:
// a. Tiền = số lượng * đơn giá
// b. Thuế giá trị gia tăng = 10% * tiền
// 3. Nhập điểm thi và hệ số 3 môn: Toán, lý, hóa của một sinh viên. Tính điểm trung bình của
// sinh viên đó.
// 4. Nhập bán kính của đường tròn. Tính chu vi và diện tích của hình tròn.
// 5. Nhập vào số xe (gồm 4 chữ số) của bạn. Cho biết số xe của bạn được mấy nút?
// Hướng dẫn: ta dùng toán tử % và / để lấy các ký số của số xe.
// VD:
// int a=1234;
// int b=a%10; //b = 4
// a=a/10; //a= 123
// 6. Viết chương trình giải phương trình bậc 1: ax + b = 0
// Hướng dẫn: nếu a ==0 thì phép chia b/a sẽ bị lỗi. Vì thế, chúng ta dùng if để xét: nếu a==0 thì
// xuất ra dòng chữ “không chia cho số 0”, ngược lại xuất ra nghiệm của phương trình.
// 7. Viết chương trình giải phương trình bậc 2: ax 2 + bx + c = 0
// Hướng dẫn: dùng hàm sqrt(x) để lấy căn bậc 2 của x.
// VD:
// int a = 4;
// int b = sqrt(a); // b = 2
// TODO:
// [x] ex1
// [] ex2
// [x] ex3
// [] ex4
// [] ex5
// [] ex6
// [] ex7

#include <iostream>
using namespace std;

void ex1() {
	int a, b;

	cout << "Enter a, b" << endl;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;

	cout << "a + b = " << a + b << endl;
	cout << "a - b = " << a - b << endl;
	cout << "a * b = " << a * b << endl;
	cout << "a / b = " << a / b << endl;
}

void ex2() {
}

void ex3() {
	int math, phy, chem;

	cout << "Enter your score math, phy and chem" << endl;
	cout << "math = ";
	cin >> math;
	cout << "phy = ";
	cin >> phy;
	cout << "chem = ";
	cin >> chem;

	cout << "adv = " << ( math + phy + chem ) / 3 << endl;
}

int main() {
	// cout << "bai tap 1" << endl;
	// ex1();
	cout << "bai tap 2" << endl;
	ex2();
	// cout << "bai tap 3" << endl;
	// ex3();
	// cout << "bai tap 4" << endl;
	// ex4();
	// cout << "bai tap 5" << endl;
	// ex5();
	// cout << "bai tap 6" << endl;
	// ex6();
	// cout << "bai tap 7" << endl;
	// ex7();
	return 0;
}
