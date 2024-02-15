/*Exercise 1.22: Write a program that reads several transactions for the same
ISBN. Write the sum of all the transactions that were read.
*/

#include <iostream>
#include "Sales_item.h"

int main() {
  Sales_item total, item;
  if (std::cin >> total) {
    while (std::cin >> item){
      total += item;
    }

    std::cout << total << std::endl;
  }

  return 0;
}