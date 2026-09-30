/******************************************************************************

Disciplina: INF101 - Programação de Computadores I
Nome: Anthony Araújo Rocha 28877
Data: 29/09/2026
Descrição: Atividade 17

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int senha;

    cout << "Digite a senha: ";
    cin >> senha;

    if (senha >= 100000 && senha <= 999999 && senha % 10 != 0) {
        cout << "Senha valida." << endl;
    } else {
        cout << "Senha invalida." << endl;
    }

    return 0;
}