/* Exercise 1.11: Write a program that prompts the user for two integers.
Print each number in the range specified by those two integers.
*/

#include <iostream>

int main(){
    int n1=0, n2=0;

    // If the user put a bigger number in the first choice, the result will be null.  
    std::cout << "Write two (integer) numbers:" << std::endl;
    std::cin >> n1 >> n2;

    std::cout << "The range between these numbers is: " << std::endl;

    while(n1 <= n2){
        std::cout << n1 << std::endl;
        ++n1;
    }

    return 0;
}