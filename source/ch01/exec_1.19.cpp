#include <iostream>

int main() {
  int v1, v2;
  std::cout << "Please input 2 number, and system will print the continous numbers between these two numbers" << std::endl;
  std::cin >> v1 >> v2;

  if (v1 > v2) {
    int temp = v2;
    v2 = v1;
    v1 =temp;
  }
  int i = v1;
  while(i <= v2) {
    std::cout << i << ",";
    i++;
  }
}