#include <iostream>

int main() {
  int i = 0;
  int j = 1;

  int *p = &i;

  p = &j;

  std::cout << "取得p地址儲存的值 (使用dereference):" << *p << std::endl;
  std::cout << "取得p的值 (地址):" << (void*) p << std::endl;
}