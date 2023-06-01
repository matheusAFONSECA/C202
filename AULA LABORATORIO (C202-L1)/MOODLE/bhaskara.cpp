#include <iostream>
#include <locale>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	//declaração de variáveis
	float x1, x2, b, c, a, d;
 	
 	//entrada de dados
	cout<<"Declare os três valores de A, B e C da equação de bhaskara (Ax² + Bx + C): ";
	cin>>a >>b >>c;
	//calculo
	d = pow(b,2) - 4 * a * c;
	x1= (sqrt(d) - b) / (2 * a);
	x2= ( - sqrt(d) - b) / (2 * a);
	
	//saida de dados
	cout<<fixed<<setprecision(5);
	if(d > 0)
		cout<<"Existem duas raízes e são:"<<x1<<" e "<<x2;
		else
			cout<<"Calculo impossível...";
	
	return 0;
}