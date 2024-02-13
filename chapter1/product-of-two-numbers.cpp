/* Our program used the addition operator, +, to add two
numbers. Write a program that uses the multiplication operator, *, to print
the product instead. */

#include <iostream>

int main(){

    int n1 = 0, n2 = 0;

    std::cout << "Write two numbers" << std::endl;
    std::cin >> n1 >> n2;

    std::cout << "The product of these numbers is: " << n1 * n2 << std::endl;
    return 0;
}