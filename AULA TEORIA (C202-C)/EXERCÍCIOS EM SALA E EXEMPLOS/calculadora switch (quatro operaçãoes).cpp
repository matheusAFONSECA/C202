#include <iostream>

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
	switch (d)
	{
		case '/':
			cout<<"Resultado = "<<z<<endl;
			break;
		case '*':
			cout<<"Resultado = "<<w<<endl;
			break;
		case '+':
			cout<<"Resultado = "<<a<<endl;
			break;
		case '-':
			cout<<"Resultado = "<<b<<endl;
			break;
		default:
			cout<<"Operação impossivel..."<<endl;
		
	}
	
	return 0;
	
}