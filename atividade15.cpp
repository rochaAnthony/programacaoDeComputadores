/******************************************************************************

Disciplina: INF101 - Programação de Computadores I
Nome: Anthony Araújo Rocha 28877
Data: 29/09/2026
Descrição: Atividade 15

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int idade;
    bool documentoValido;

    cout << "Digite a idade: ";
    cin >> idade;

    cout << "O documento e valido? Digite 1 para sim e 0 para nao: ";
    cin >> documentoValido;

    if (idade >= 18 && documentoValido) {
        cout << "Pode iniciar o processo para obtencao da CNH." << endl;
    } else {
        cout << "Nao pode iniciar o processo para obtencao da CNH." << endl;
    }

    return 0;
}