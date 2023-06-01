#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	//declração de variáveis
	double  salario, tempo;
	
	//entrada de dados
	cout<<"Digite o salário base do funcionário:";
	cin>>salario;
	cout<<"Declare o tempo de serviço do funcionário:"; 	
	cin>>tempo;
	
	//condição
	if(tempo>5)
		salario = salario + salario * 0.1;  //aumento de 10% para quem tem mais de 5 anos de serviço
    //saida de dados
    cout<<"O salário do funcionário é, em reais,:"<<salario;
		
	return 0;
	
}