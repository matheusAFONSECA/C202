#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	//declaração de variáveis
	double i, soma = 0, x;
	
	//entrada do valor de x
	cout<<"Declare o valor de x: ";
	cin>>x;
	
	//inicio da conta e do ciclo
	for (i = 1; i<=10; i = i*2)
	{
		soma = (x/i) + soma;
	}
		soma = (x/6) + soma;
	
	//saída de dados
	cout<<"f(x)= "<<soma<<endl;
	
	return 0;
	
}