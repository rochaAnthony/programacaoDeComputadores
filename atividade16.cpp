/******************************************************************************

Disciplina: INF101 - Programação de Computadores I
Nome: Anthony Araújo Rocha 28877
Data: 29/09/2026
Descrição: Atividade 16

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;
    float media, frequencia;

    cout << "Digite o nome do aluno: ";
    getline(cin, nome);

    cout << "Digite a media: ";
    cin >> media;

    cout << "Digite a frequencia em %: ";
    cin >> frequencia;

    if (media >= 70 && frequencia >= 75) {
        cout << nome << " Aprovado." << endl;
    } else if (media >= 50 && media < 70 && frequencia >= 75) {
        cout << nome << " Recuperacao." << endl;
    } else {
        cout << nome << " Reprovado." << endl;
    }

    return 0;
}