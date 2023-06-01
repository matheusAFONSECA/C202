#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese" );
	
	//declaração de variáveis
	double  x, y, z;
	
	//entrada de dados
	cout<<"Declare o valor de x:";
	cin>>x;
	cout<<"Declare o valor de y:"; 
	cin>>y;
	
	//calculo
	z = (sqrt( x - y )) / (sqrt( x + y ));
	
	//condição e saida de dados
	if (x - y < 0  ||  x + y <= 0 )
		cout<<"Calculo impossivel..."; 
	if (x - y >= 0  ||  x + y > 0 )
		cout<<"O valor de z é:"<<z;
	
	return 0;
	
}