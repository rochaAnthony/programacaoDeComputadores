/******************************************************************************

Disciplina: INF101 - Programação de Computadores I
Nome: Anthony Araújo Rocha 28877
Data: 29/09/2026
Descrição: Atividade 9

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    bool possuiCartao, programaFidelidade;

    cout << "Possui cartao da loja? Digite 1 para sim e 0 para nao: ";
    cin >> possuiCartao;

    cout << "Participa do programa de fidelidade? Digite 1 para sim e 0 para nao: ";
    cin >> programaFidelidade;

    if (possuiCartao || programaFidelidade) {
        cout << "Cliente tem direito ao desconto." << endl;
    } else {
        cout << "Cliente nao tem direito ao desconto." << endl;
    }

    return 0;
}