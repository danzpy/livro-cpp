/* Exercise 1.19: Revise the program you wrote for the exercises in § 1.4.1 (p.
13) that printed a range of numbers so that it handles input in which the first
number is smaller than the second. */

#include <iostream>

int main(){
    int n1, n2;
    std::cout << "Write two numbers" << std::endl;
    std::cin >> n1 >> n2;
    if(n1 > n2){
        std::cout << "The range between " << n2 << " to " << n1 << " is " << std::endl;
        while(n2 <= n1){
            std::cout << n2 << std::endl;
            ++n2;
        }
    }
    else{
        std::cout << "The range between " << n1 << " to " << n2 << " is " << std::endl;
        while (n1 <= n2){
            std::cout << n1 << std::endl;
            ++n1;
        }
    }

    return 0;
}