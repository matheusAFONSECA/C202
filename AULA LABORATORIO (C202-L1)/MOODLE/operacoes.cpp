#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{	
	//declara��o de vari�veis
	double  X, Y;
	char  C;
	
	//entrada de dados
	cin>>C;
	cin>>X>>Y;
	
	//condi��o
	cout<<fixed<<setprecision(1);
	switch (C)
	{
		case '/':
			cout<<"Resultado = "<<(X/5)<<endl;
			break;
		case '*':
			cout<<"Resultado = "<<(2*(X-Y))<<endl;
			break;
		case '+':
			cout<<"Resultado = "<<(pow(Y,2)+2)<<endl;
			break;
		case '-':
			cout<<"Resultado = "<<(X-Y)<<endl;
			break;
		default:
			cout<<"Impossivel"<<endl;
		
	}
	
	return 0;
	
}