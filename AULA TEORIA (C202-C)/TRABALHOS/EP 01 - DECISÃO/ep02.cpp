#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	
	//declaração de variáveis
	double x, y, z, w, k;
	
	//entrada de dados
	cout<<"Declare o valor de X e de Y: ";
	cin>>x>>y;
	
	//calculos
	z = pow(x,2) - pow(y,2) + (2*x*y);
	w =(2*x*y) + x + y;
	k = pow(y,2) + pow(x,2) + (2*x*y);
	
	//saida de dados e condições
	if (x > y)
		cout<<"f(x,y) = "<<z<<endl;
	else if (x == y)
		cout<<"f(x,y) = "<<w<<endl;
	else if (x < y)
		cout<<"f(x,y) = "<<k<<endl;
	
	return 0;
	
}