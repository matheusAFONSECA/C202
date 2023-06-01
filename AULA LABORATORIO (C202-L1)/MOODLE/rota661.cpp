#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Poruguese");
	//declaração de variáveis
	double x, y, A, B, C;
	
	//entrada de dados
	cout<<"Declare o valor de X: ";
	cin>>x;
	cout<<"Declare o valor de Y: ";
	cin>>y;
	
	//calculos
	A = cbrt((x + (2 * y)) / (3 + x));
	B = pow(x,3) - (x * y) + sqrt(y);
	C = (sqrt(pow(x,2) - (4 * y)) - x) / (2 * y);
	
	//codições e saidas de dados
	cout<<fixed<<setprecision(2);
	if (x < y)
		cout<<A<<endl;
	else if ( x == y)
		cout<<B<<endl;
	else if ( x > y)
		cout<<C<<endl;

	return 0;
	
}