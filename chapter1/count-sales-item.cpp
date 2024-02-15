/*Exercise 1.23: Write a program that reads several transactions and counts
how many transactions occur for each ISBN.*/

#include <iostream>
#include "Sales_item.h"

int main(){
    Sales_item curItem, item;

    if(std::cin >> curItem){
        int count=1;
        while(std::cin >> item){
            if(item.isbn() == curItem.isbn()){
                ++count;
            }
            else{
                std::cout << curItem.isbn() << " occurs " << count << " times." << std::endl;
                curItem = item;
                count = 1;
            }
        }

    std::cout << curItem.isbn() << " occurs " << count << " times." << std::endl;
    }

    return 0;
}