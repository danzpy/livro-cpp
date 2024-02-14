/* Exercise 1.13: Rewrite the exercises from § 1.4.1 (p. 13) using for loops. */

#include <iostream>

void sum50to100(){
    int val=0;

    for(int i=50; i <= 100; ++i){
        val+= i;
    }

    std::cout << "The inclusive sum is: " << val << std::endl;
    std::cout << std::endl;
}

void print10to0(){
    for(int i=10; i >= 0; --i){
        std::cout << i << std::endl;
    }
    std::cout << std::endl;
}

void rangeBetween(){
    int n1, n2;

    std::cout << "Write two numbers" << std::endl;
    std::cin >> n1 >> n2;

    std::cout << "Printing the range between " << n1 << " and " << n2 << std::endl;

    for (int i=n1; i <= n2; i++){
        std::cout << i << std::endl;
    }
}



int main(){
    sum50to100();
    print10to0();
    rangeBetween();

    return 0;
}