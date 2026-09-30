/******************************************************************************

Disciplina: INF101 - Programação de Computadores I
Nome: Anthony Araújo Rocha 28877
Data: 29/09/2026
Descrição: Atividade 18

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    float saldo, saque;

    cout << "Digite o saldo: ";
    cin >> saldo;

    cout << "Digite o valor do saque: ";
    cin >> saque;

    if (saque <= 0) {
        cout << "Valor de saque invalido." << endl;
    } else if (saque > saldo) {
        cout << "Saldo insuficiente." << endl;
    } else {
        cout << "Saque realizado." << endl;
    }

    return 0;
}