/******************************************************************************

Disciplina: INF101 - Programação de Computadores I
Nome: Anthony Araújo Rocha 28877
Data: 29/09/2026
Descrição: Atividade 20

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int idade;
    bool usuarioValido, senhaValida, bloqueado;

    cout << "Digite a idade: ";
    cin >> idade;

    cout << "Usuario valido? 1 para sim, 0 para nao: ";
    cin >> usuarioValido;

    cout << "Senha valida? 1 para sim, 0 para nao: ";
    cin >> senhaValida;

    cout << "Usuario bloqueado? 1 para sim, 0 para nao: ";
    cin >> bloqueado;

    if (idade >= 18 && usuarioValido && senhaValida && !bloqueado) {
        cout << "Acesso permitido." << endl;
    } else {
        cout << "Acesso negado." << endl;
    }

    return 0;
}