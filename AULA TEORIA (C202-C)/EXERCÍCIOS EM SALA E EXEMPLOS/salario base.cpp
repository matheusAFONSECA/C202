#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	//declra��o de vari�veis
	double  salario, tempo;
	
	//entrada de dados
	cout<<"Digite o sal�rio base do funcion�rio:";
	cin>>salario;
	cout<<"Declare o tempo de servi�o do funcion�rio:"; 	
	cin>>tempo;
	
	//condi��o
	if(tempo>5)
		salario = salario + salario * 0.1;  //aumento de 10% para quem tem mais de 5 anos de servi�o
    //saida de dados
    cout<<"O sal�rio do funcion�rio �, em reais,:"<<salario;
		
	return 0;
	
}