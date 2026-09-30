/******************************************************************************

Disciplina: INF101 - Programação de Computadores I
Nome: Anthony Araújo Rocha 28877
Data: 02/09/2026
Descrição: Estrutura de decisão 1  

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    double num1, num2, num3, media, notaminExame;
    
    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;
    cout << "Digite o terceiro número: ";
    cin >> num3;
    
    media = (num1 + num2 + num3)/3;
    
    if(media<3) {
        cout << "Aluno reprovado com média: " << media << endl;
    }
    else if(media>=3 && media<7) {
        notaminExame = 14 - media;
        cout << "Aluno ficou abaixo da média e precisa tirar pelo menos " << notaminExame << " no exame final" << endl;
    }
    else {
        cout << "Aluno aprovado com média: " << media << endl;
    }
    
    return 0;
}