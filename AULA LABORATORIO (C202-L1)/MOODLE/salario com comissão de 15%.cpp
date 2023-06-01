#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//declração de variáveis
	char nome[50];
	double sal, mont, salario;
	
	//entrada de dados
	cout<<"Qual o nome do funcionário:";
	cin>>nome;
	cout<<"Qual o salário fixo, em reais, do funcionário:";
	cin>>sal;
	cout<<"Qual foi o montante de vendas,em reais, do funcionário:";
	cin>>mont; 
	
	//calculo
	salario = sal + mont * 0.15;
	
	//saida de dados
	cout<<fixed<<setprecision(2);
	cout<<"O salário do "<<nome<<" esse mês é de:"<<salario;
	
	return 0;
	
}