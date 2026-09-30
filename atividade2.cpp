/******************************************************************************

Disciplina: INF101 - Programação de Computadores I
Nome: Anthony Araújo Rocha 28877
Data: 02/09/2026
Descrição: Estrutura de decisão 2

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int num;
    double resto;
    
    cout << "Digite um número: ";
    cin >> num;
    
    resto = num % 2;
    
    if (resto != 0) {
        cout << num << " é um número impar.";
    }
    else {
        cout << num << " é um número par";
    }
    
    /* cout << resto; */
    
    return 0;
}