#include <iostream>
#include <string>
using namespace std;
// TODO:
// [x] ex15
// why? if else ? == "??"
// stringggggggggggggggggggggggggggggg
// [ ] ex17
// [ ] ex18
// [ ] ex41
// [ ] ex42
// [ ] ex43
// [ ] ex44
// [ ] ex62
// NOTE:
// https://drive.google.com/file/d/1wSw6t9PvDeUnb79eAaRc4ThIwgdS5jO6/view

// Viết chương trình thể hiện trò chơi oẳn tù tì với qui ước: Búa = ‘B’; Bao =
// ‘O’; Kéo =‘K’. Nhập vào hai kí tự đại diện cho hai người chơi. Xuất ra màn
// hình câu thông báo người chơi nào thắng hoặc hòa.
void ex15() {
  // char user1[10], user2[10];
  // char BUA[10] = "B";
  // char BAO[10] = "O";
  // char KEO[10] = "K";
  string user1, user2;
  string BUA = "B";
  string BAO = "O";
  string KEO = "K";

  cout << "trò chơi kéo búa bao" << endl;
  cout << "luật chơi: Búa = ‘B’; Bao = ‘O’; Kéo =‘K’" << endl;

  cout << "yo!" << endl;
  cout << "Nobita ra ";
  getline(cin, user1);
  cout << "";
  cout << "Doremon ra ";
  getline(cin, user2);

  if (user1 == BUA && user2 == KEO) {
    cout << "Nobita win" << endl;
  } else if (user1 == BAO && user2 == BUA) {
    cout << "Nobita win" << endl;
  } else if (user1 == KEO && user2 == BAO) {
    cout << "Nobita win" << endl;
  } else if (user1 == BAO && user2 == KEO) {
    cout << "Doremon win" << endl;
  } else if (user1 == KEO && user2 == BUA) {
    cout << "Doremon win" << endl;
  } else if (user1 == BUA && user2 == BAO) {
    cout << "Doremon win" << endl;
  } else {
    cout << "Nobita và Doremon là đôi bạn thân" << endl;
  }
}

int main() {
  cout << "_____________" << endl;
  cout << "< Yo! dudes >" << endl;
  cout << "-------------" << endl;
  cout << "  |  ^__^" << endl;
  cout << "   - (oo)|_______  #" << endl;
  cout << "     (__)|       )/" << endl;
  cout << "         ||----w |" << endl;
  cout << "         ||     ||" << endl;

  cout << "\n\n Exercise 15" << endl;
  ex15();

  // cout << "\n\n Exercise 17" << endl;
  // ex17();

  // cout << "\n\n Exercise 18" << endl;
  // ex18();

  // cout << "\n\n Exercise 41" << endl;
  // ex41();

  // cout << "\n\n Exercise 42" << endl;
  // ex42();

  // cout << "\n\n Exercise 43" << endl;
  // ex44();

  // cout << "\n\n Exercise 44" << endl;
  // ex44();

  // cout << "\n\n Exercise 62" << endl;
  // ex62();

  return 0;
}
