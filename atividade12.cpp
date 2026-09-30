/******************************************************************************

Disciplina: INF101 - Programação de Computadores I
Nome: Anthony Araújo Rocha 28877
Data: 29/09/2026
Descrição: Atividade 12

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    bool bloqueado;

    cout << "O usuario esta bloqueado? Digite 1 para sim e 0 para nao: ";
    cin >> bloqueado;

    if (!bloqueado) {
        cout << "Acesso permitido." << endl;
    } else {
        cout << "Acesso negado." << endl;
    }

    return 0;
}