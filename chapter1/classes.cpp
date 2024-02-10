// É possível notar que para casos simples, o uso de classes e structures são semelhantes.

#include <iostream>
#include <string>

using namespace std;




class User {

    // Ao lidar com classes, os membros são automaticamente classificados como privados.    
    float peso = 82.5; // Quando o método "descobre_peso()" for invocado, o valor padrão será 82.5 para cada instância criada.

    public:
        string nome;
        string sobrenome;
        int idade;

        float descobre_peso(){
            return peso;
        }
 
};  

int main(){
    User user1;

    user1.nome = "Daniel ";
    user1.sobrenome = "Alves";
    user1.idade = 27;

    cout << "Usuário " << user1.nome << user1.sobrenome << ", " << user1.idade << " anos, cujo peso (padrão) é " << user1.descobre_peso() << "." << endl;
}