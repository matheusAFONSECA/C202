#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//declara��o de vari�veis
	double  x, y, z, w, a, b;
	char  d;
	
	//entrada de dados
	cout<<"Declare o valor de x:";
	cin>> x;
	cout<<"Declare o valor de y:"; 
	cin>> y;
	cout<<"Qual opera��o se deseja fazer: * (multiplica��o), + (adi��o), - (subtra��o) ou / (divis�o)?: ";
	cin>>d;
	
	//calculos
	z = x / y;
	w = x * y;
	a = x + y;
	b = x - y;
	
	//condi��o
	if (d == '/')
		cout<<"Resultado = "<<z<<endl;
	else if (d == '*') 
			cout<<"Resultado = "<<w<<endl;
			else if (d == '+')
				cout<<"Resultado = "<<a<<endl;
				else if (d == '-')
					cout<<"Resultado = "<<b<<endl;
				else 
					cout<<"Opera��o imposs�vel..."<<endl;
	
	return 0;
	
}