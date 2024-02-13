/* 
Explain whether the following program fragment is legal. 
If the program is legal, what does it do? If the program is not legal, why
not? How would you fix it?
*/

std::cout << "The sum of " << v1;
          << " and " << v2;
          << " is " << v1 + v2 << std::endl;

/*
This program will not gonna work because in the second and third line the statement "std::cout" 
don't exist. And its necessaire to put "#include <iostream>".
*/