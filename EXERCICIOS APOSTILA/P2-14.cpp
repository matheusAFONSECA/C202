#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	//declara��o de vari�veis
	double v, a, sb, sl;
	char nome[20];
	
	//entrada de dados
	cout<<"Declare o nome do professor: ";
	cin>>nome;
	cout<<"qual o n�mero de aulas e o valor delas? ";
	cin>>a>>v;
	
	//calculos de sal�rios
	sb = a*v;
	sl = sb*0.9;
	
	//saida de dados 
	cout<<"Nome: "<<nome<<endl;
	cout<<"Sal�rio bruto: R$"<<sb<<endl;
	cout<<"Sal�rio l�quido: R$"<<sl<<endl;
	
	return 0;
	
}