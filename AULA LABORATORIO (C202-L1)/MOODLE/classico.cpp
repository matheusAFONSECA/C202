#include <iostream>

using namespace std;

int main()
{	
	//declara��o de vari�veis
	int  x, y;
	char  d;
	
	//entrada de dados
	cin>>x>>y;
	cin>>d;
	
	//condi��o
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