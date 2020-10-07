#include <iostream>

using std::cin;
using std::string;
using std::cout;
using std::getline;
using std::endl;

// 一次讀取一行
int main() {
  string s;
  while(getline(cin, s)) {
    cout << s << endl;
  }
  return 0;
}

// 一次讀取一個詞
int main() {
  string s;
  while (cin >> s) {
    cout << s << endl;
  }
  return 0;
}