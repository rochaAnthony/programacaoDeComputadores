/******************************************************************************

Disciplina: INF101 - Programação de Computadores I
Nome: Anthony Araújo Rocha 28877
Data: 29/09/2026
Descrição: Atividade 7

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int idade;
    bool possuiIngresso;

    cout << "Digite a idade: ";
    cin >> idade;

    cout << "Possui ingresso? Digite 1 para true e 0 para false: ";
    cin >> possuiIngresso;

    if (idade >= 18 && possuiIngresso == true) {
        cout << "Entrada permitida." << endl;
    } else {
        cout << "Entrada negada." << endl;
    }

    return 0;
}