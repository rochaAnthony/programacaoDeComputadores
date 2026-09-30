/******************************************************************************

Disciplina: INF101 - Programação de Computadores I
Nome: Anthony Araújo Rocha 28877
Data: 29/09/2026
Descrição: Atividade 6

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string usuario, senha;

    cout << "Digite o usuario: ";
    cin >> usuario;

    cout << "Digite a senha: ";
    cin >> senha;

    if (usuario == "admin" && senha == "1234") {
        cout << "Acesso permitido." << endl;
    } else {
        cout << "Acesso negado." << endl;
    }

    return 0;
}