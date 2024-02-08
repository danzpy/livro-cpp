#include <iostream>

using namespace std;

// v[x] significa vetor de tamanho x.
// * significa ponteiro para um elemento.
// & significa que é uma referência para um elemento.

// Todos os casos citados acima são chamados de "declarator operators"

void copy(){

    int v1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // Criando um vetor chamadao v1 com dez elementos [10]
    int v2[10]; // Criando outro vetor do mesmo tamanho.

    int* p = &v1[3]; // P aponta para o quarto elemento de v1.
    int x = *p; // X é o elemento em que o P está apontando.

    cout << "O valor em memória para p é: " << p << " e o elemento que está sendo apontado é: " << x << endl;
    
    cout << "\n" << endl;
    cout << "A cópia do vetor criado é: " << endl;
    for (auto x : v1){
        v2[x] = v1[x];

        cout << v2[x];
    }

    cout << "\n" << endl;

    int a = 10;
    int& refA = a; // refA é uma referência para a variável 'a'


    cout << "a = " << a << " e refA = " << refA << endl;
}


int main(){
    copy();
}

// Continuar estudando os conceitos abordados em: https://www.youtube.com/watch?v=ASVB8KAFypk