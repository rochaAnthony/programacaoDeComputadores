/******************************************************************************

Disciplina: INF101 - Programação de Computadores I
Nome: Anthony Araújo Rocha 28877
Data: 29/09/2026
Descrição: Atividade 8

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int dia;

    cout << "Digite um numero de 1 a 7: ";
    cin >> dia;

    if (dia == 1 || dia == 7) {
        cout << "É fim de semana." << endl;
    } else {
        cout << "É dia util." << endl;
    }

    return 0;
}