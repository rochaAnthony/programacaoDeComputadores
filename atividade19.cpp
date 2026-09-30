/******************************************************************************

Disciplina: INF101 - Programação de Computadores I
Nome: Anthony Araújo Rocha 28877
Data: 29/09/2026
Descrição: Atividade 19

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int idade;

    cout << "Digite a idade: ";
    cin >> idade;

    if (idade < 16) {
        cout << "Nao pode votar." << endl;
    } else if (idade == 16 || idade == 17) {
        cout << "Voto facultativo." << endl;
    } else if (idade >= 18 && idade < 70) {
        cout << "Voto obrigatorio." << endl;
    } else {
        cout << "Voto facultativo." << endl;
    }

    return 0;
}