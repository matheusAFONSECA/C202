#include <iostream>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	//declara��o de vari�veis
	int soma = 0;
	
	//entrada de dados e in�cio de ciclo for 
	for (int i = 0; i<=10; i = i+2)
	{
			soma = soma + i;
	}
	
	cout<<"Soma = "<<soma;
	
	return 0;
	
}