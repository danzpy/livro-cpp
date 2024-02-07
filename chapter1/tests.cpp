#include <iostream>

using namespace std;

// switch: É utilizado para testar um valor contra uma série de constantes. É semelhante ao "case when" do SQL.


bool verifica(){
    cout << "Você deseja continuar? (S/N)" << endl;

    char answer;
    cin >> answer;

    switch(answer){
        case 'S': // Aspas simples pois estamos avaliando apenas um caractere.
            return true;
        case 'N': // Aspas simples pois estamos avaliando apenas um caractere.
            return false;
        default: // Se nenhuma das opções 'case' for encontrada, a opção default será avaliada.
            cout << "Opção inválida. Será interpretado como não." << endl;
            return false;
    }
}

int main(){
    if (verifica()){
        cout << "Ok. Irei continuar." << endl;
    }

    else{
        cout << "Encerrando..." << endl;
    }
}