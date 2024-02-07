#include <iostream>
#include <typeinfo> 

using namespace std;



void types(){
    int i1 = 7.2; // Nesse caso o valor será arredondado.
//  int i2 {7.2}; Nesse caso será exibido um erro.
    double i2 {7.2}; // Ao utilizar "{}" é possível representar uma atribuição.
    double i3 = {7.2}; // Neste exemplo a utilização de "="
    auto i4 {true};

    cout << "Ao criar uma variável do tipo 'int' e atribuir com '=' o valor '7.2', o valor será arredondado: " << i1 << endl;
    cout << "Se eu atribuir o valor " << i2 << " com {}, resultará um erro. Então devo classifica-la como 'double'." << endl;
    cout << "É possível atribuir (double) com '=' e {} o valor " << i3 << " porém seria redundante." << endl;
    cout << "Ao declarar uma variável com 'auto', o valor poderá ser classificado pelo interpretador (i4 = " << i4 << " = " << typeid(i4).name() << ")" << endl;

}

int main(){
    types();
}