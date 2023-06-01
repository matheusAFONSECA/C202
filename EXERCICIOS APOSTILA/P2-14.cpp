#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	//declaração de variáveis
	double v, a, sb, sl;
	char nome[20];
	
	//entrada de dados
	cout<<"Declare o nome do professor: ";
	cin>>nome;
	cout<<"qual o número de aulas e o valor delas? ";
	cin>>a>>v;
	
	//calculos de salários
	sb = a*v;
	sl = sb*0.9;
	
	//saida de dados 
	cout<<"Nome: "<<nome<<endl;
	cout<<"Salário bruto: R$"<<sb<<endl;
	cout<<"Salário líquido: R$"<<sl<<endl;
	
	return 0;
	
}