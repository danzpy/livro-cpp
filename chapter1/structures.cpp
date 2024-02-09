// Struct é semelhante a uma Class. Ambos podem ser utilizados para criar estruturas.
// Por conveniência, a utilização de structures é mais viável para a criação de estruturas "pequenas".
// Já as classes, podem ser utilizadas para a criação de objetos mais complexos.

// Por definição, Classes são privadas e Structures são públicas. Isso significa que quando públicas,
// os membros podem ser acessados fora do objeto. E quando privadas, só poderão ser modificadas dentro
// do objeto.
// É aconselhável criar métodos apenas nas classes. Porém é possível também criálas em strucutures.

#include <iostream>
#include <string>

using namespace std;

struct User {
    string nome;
    string sobrenome;
    int idade;

    float descobre_peso(){
        return peso;
    }

    // Quando um membro é privado, não é possível declarar um valor fora deste escopo.
    private:
        float peso = 82.5; // Quando o método "descobre_peso()" for invocado, o valor padrão será 82.5 para cada instância criada.
};


int main(){

    User user1;

    user1.nome = "Daniel ";
    user1.sobrenome = "Alves";
    user1.idade = 27;

    cout << "Usuário " << user1.nome << user1.sobrenome << ", " << user1.idade << " anos, cujo peso (padrão) é " << user1.descobre_peso() << "." << endl;

    return 0;
}

