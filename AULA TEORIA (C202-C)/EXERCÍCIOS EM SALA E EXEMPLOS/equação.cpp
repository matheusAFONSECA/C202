#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//Declaração de variaveis
	float x;
	double s;
	
	//entrada de dados
	cout<<"Declare o valor de x:";
	cin>>x;
	
	//calculo
	s = ( pow(x,3) - pow(x,2)) * sqrt(x);
	
	//saida de dados
	cout<<fixed<<setprecision(2);
	cout<<"O valor de x é:"<<s;
	
	return 0;
}