/******************************************************************************

Disciplina: INF101 - Programação de Computadores I
Nome: Anthony Araújo Rocha 28877
Data: 02/09/2026
Descrição: Estrutura de decisão 3

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    double salarioBruto, valorPrestacao, limitePrestacao;
    
    cout << "Informe o seu salário bruto: ";
    cin >> salarioBruto;
    cout << "Informe o valor da prestação: ";
    cin >> valorPrestacao;
    
    limitePrestacao = salarioBruto * 0.3;
    
    if(valorPrestacao > limitePrestacao) {
        cout << "Empréstimo reprovado. O valor da parcela é superior a 30" << "%" << " do seu salário bruto.";
    }
    else {
        cout << "Empréstimo aprovado.";
    }
    
    return 0;
}