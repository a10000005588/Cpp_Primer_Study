#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
  string s = "hello world hola ha";

  for (auto &x: s) {
    x = 'X';
  }

  cout << s << endl;
  return 0;
}