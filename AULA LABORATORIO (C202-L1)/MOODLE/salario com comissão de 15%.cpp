#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//declra��o de vari�veis
	char nome[50];
	double sal, mont, salario;
	
	//entrada de dados
	cout<<"Qual o nome do funcion�rio:";
	cin>>nome;
	cout<<"Qual o sal�rio fixo, em reais, do funcion�rio:";
	cin>>sal;
	cout<<"Qual foi o montante de vendas,em reais, do funcion�rio:";
	cin>>mont; 
	
	//calculo
	salario = sal + mont * 0.15;
	
	//saida de dados
	cout<<fixed<<setprecision(2);
	cout<<"O sal�rio do "<<nome<<" esse m�s � de:"<<salario;
	
	return 0;
	
}