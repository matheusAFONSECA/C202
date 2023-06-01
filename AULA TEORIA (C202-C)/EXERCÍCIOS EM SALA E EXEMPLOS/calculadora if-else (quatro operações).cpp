#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//declaração de variáveis
	double  x, y, z, w, a, b;
	char  d;
	
	//entrada de dados
	cout<<"Declare o valor de x:";
	cin>> x;
	cout<<"Declare o valor de y:"; 
	cin>> y;
	cout<<"Qual operação se deseja fazer: * (multiplicação), + (adição), - (subtração) ou / (divisão)?: ";
	cin>>d;
	
	//calculos
	z = x / y;
	w = x * y;
	a = x + y;
	b = x - y;
	
	//condição
	if (d == '/')
		cout<<"Resultado = "<<z<<endl;
	else if (d == '*') 
			cout<<"Resultado = "<<w<<endl;
			else if (d == '+')
				cout<<"Resultado = "<<a<<endl;
				else if (d == '-')
					cout<<"Resultado = "<<b<<endl;
				else 
					cout<<"Operação impossível..."<<endl;
	
	return 0;
	
}