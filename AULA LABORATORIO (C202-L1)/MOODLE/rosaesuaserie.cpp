#include <iostream>
#include <cmath>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//declara��o de vari�veis
	int n, i;
	double algo=0, x, z, y;
	
	//entrada do valor de x e de n
	cout<<"Quantos termos tem a fun��o: ";
	cin>>n;
	cout<<"Qual o valor de x: ";
	cin>>x;
	
	z=1;  //valor do expoente
	y=1;  //n�mero que determinar� se ocorrera soma ou subtra��o
	for(i=0; i<n; i++)
	{
		algo = algo + ((n-i)*pow(x,z))/(z*y);
		z++;
		y = y*(-1);
	}
	
	cout<<fixed<<setprecision(4);
	cout<<"algo(x) = "<<algo<<endl;
	
	return 0;
	
}