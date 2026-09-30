/******************************************************************************

Disciplina: INF101 - Programação de Computadores I
Nome: Anthony Araújo Rocha 28877
Data: 29/09/2026
Descrição: Atividade 11

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    bool manutencao;

    cout << "O sistema esta em manutencao? Digite 1 para sim e 0 para nao: ";
    cin >> manutencao;

    if (!manutencao) {
        cout << "Sistema disponivel." << endl;
    } else {
        cout << "Sistema indisponivel." << endl;
    }

    return 0;
}