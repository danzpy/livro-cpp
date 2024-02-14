/*Exercise 1.12: What does the following for loop do? What is the final value
of sum?

This loop will (inclusive) sum the variable by the value of the iterator "i" until the value of "i" 
is less or equal than 100.

The final value will be 0.
*/

#include <iostream>

int main(){
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
        sum += i;
    
    std::cout << sum << std::endl;
    return 0;
}
