#include <iostream>
#include <locale>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	//declara��o de vari�veis
	float x1, x2, b, c, a, d;
 	
 	//entrada de dados
	cout<<"Declare os tr�s valores de A, B e C da equa��o de bhaskara (Ax� + Bx + C): ";
	cin>>a >>b >>c;
	//calculo
	d = pow(b,2) - 4 * a * c;
	x1= (sqrt(d) - b) / (2 * a);
	x2= ( - sqrt(d) - b) / (2 * a);
	
	//saida de dados
	cout<<fixed<<setprecision(5);
	if(d > 0)
		cout<<"Existem duas ra�zes e s�o:"<<x1<<" e "<<x2;
		else
			cout<<"Calculo imposs�vel...";
	
	return 0;
}