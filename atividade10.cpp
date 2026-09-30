/******************************************************************************

Disciplina: INF101 - Programação de Computadores I
Nome: Anthony Araújo Rocha 28877
Data: 29/09/2026
Descrição: Atividade 10

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int idade;
    bool possuiCondicao;

    cout << "Digite a idade do cliente: ";
    cin >> idade;

    cout << "Possui alguma condicao que da direito a prioridade? Digite 1 para sim e 0 para nao: ";
    cin >> possuiCondicao;

    if (idade >= 60 || possuiCondicao) {
        cout << "Cliente tem atendimento prioritario." << endl;
    } else {
        cout << "Cliente nao tem atendimento prioritario." << endl;
    }

    return 0;
}