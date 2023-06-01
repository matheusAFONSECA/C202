#include <iostream>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	//declaração de variáveis
	int soma = 0;
	
	//entrada de dados e início de ciclo for 
	for (int i = 0; i<=10; i = i+2)
	{
			soma = soma + i;
	}
	
	cout<<"Soma = "<<soma;
	
	return 0;
	
}