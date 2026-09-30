/******************************************************************************

Disciplina: INF101 - Programação de Computadores I
Nome: Anthony Araújo Rocha 28877
Data: 29/09/2026
Descrição: Atividade 4

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    float media, frequencia;

    cout << "Digite a media do aluno: ";
    cin >> media;

    cout << "Digite a frequencia do aluno (%): ";
    cin >> frequencia;

    if (media >= 60 && frequencia >= 75) {
        cout << "Aluno aprovado!";
    } else {
        cout << "Aluno reprovado!";
    }

    return 0;
}