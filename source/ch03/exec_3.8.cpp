#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
  string s = "hello world hola ha";

  decltype(s.size()) i = 0;
  while (i != s.size()) {
    s[i] = 'X';
    ++i;
  }

  cout << s << endl;

  for (i=0; i != s.size(); ++i) {
    s[i] = 'Y';
  }

  cout << s << endl;
  return 0;
}