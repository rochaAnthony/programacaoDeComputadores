/******************************************************************************

Disciplina: INF101 - Programação de Computadores I
Nome: Anthony Araújo Rocha 28877
Data: 29/09/2026
Descrição: Atividade 14

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    bool membro, possuiCartao;
    float valorCompra;

    cout << "O cliente e membro? Digite 1 para sim e 0 para nao: ";
    cin >> membro;

    cout << "O cliente possui cartao? Digite 1 para sim e 0 para nao: ";
    cin >> possuiCartao;

    cout << "Digite o valor da compra: ";
    cin >> valorCompra;

    if ((membro && possuiCartao) || valorCompra > 500) {
        cout << "Cliente tem direito ao desconto." << endl;
    } else {
        cout << "Cliente nao tem direito ao desconto." << endl;
    }

    return 0;
}