#include <iostream>

int main() {
    int signedInt = -10;            // Tipo signed, pode representar valores negativos e positivos
    unsigned int unsignedInt = 10;  // Tipo unsigned, representa apenas valores não negativos
    unsigned int negativeUnsignedInt = -10; // Atribuindo valor negativo ao tipo unsigned

    std::cout << "Signed Int: " << signedInt << std::endl;
    std::cout << "Unsigned Int: " << unsignedInt << std::endl;
    std::cout << "negativeUnsignedInt: " << negativeUnsignedInt << std::endl;

    return 0;
}