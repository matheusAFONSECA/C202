#include <iostream>

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
			cout<<"Opera��o impossivel..."<<endl;
		
	}
	
	return 0;
	
}