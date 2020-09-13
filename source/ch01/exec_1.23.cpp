#include <iostream>
#include "Sales_item.h"

int main() {
  Sales_item total; // 計算有多少個交易紀錄
  if(std::cin >> total) {
    Sales_item transaction;
    while(std::cin >> transaction) {
      if (total.isbn() == transaction.isbn()) {
        total += transaction;
      } else {
        // 不是相同的話就直接印出結果
        std::cout << total << std::endl;
        // total改成下一個新的tx
        total = transaction;
      }
    }
    // 讀完資料，直接印出來
    std::cout << total << std::endl;
  } else {
    std::cerr << "No input data" << std::endl;
    return -1;
  }
}
