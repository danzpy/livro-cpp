/* Exercise 1.16: Write your own version of a program that prints the sum of
a set of integers read from cin.
*/

#include <iostream>

int main(){

    int sum=0, value=0;

    while(std::cin >> value){
        sum += value;
    }
    std::cout << "The value of the variable is: " << sum << std::endl;

    return 0;
}