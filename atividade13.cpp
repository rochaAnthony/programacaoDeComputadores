/******************************************************************************

Disciplina: INF101 - Programação de Computadores I
Nome: Anthony Araújo Rocha 28877
Data: 29/09/2026
Descrição: Atividade 13

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    float media, renda;

    cout << "Digite a media do aluno: ";
    cin >> media;

    cout << "Digite a renda familiar: ";
    cin >> renda;

    if ((media >= 80 && renda <= 2000) || media >= 90) {
        cout << "Aluno pode receber a bolsa." << endl;
    } else {
        cout << "Aluno nao pode receber a bolsa." << endl;
    }

    return 0;
}