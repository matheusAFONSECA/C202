#include <iostream>

using namespace std;

int main()
{	
	//declaração de variáveis
	int  x, y;
	char  d;
	
	//entrada de dados
	cin>>x>>y;
	cin>>d;
	
	//condição
	switch (d)
	{
		case '/':
			cout<<"Resultado = "<<x/y<<endl;
			break;
		case '*':
			cout<<"Resultado = "<<x*y<<endl;
			break;
		case '+':
			cout<<"Resultado = "<<x+y<<endl;
			break;
		case '-':
			cout<<"Resultado = "<<x-y<<endl;
			break;
		default:
			cout<<"Impossivel"<<endl;
		
	}
	
	return 0;
	
}