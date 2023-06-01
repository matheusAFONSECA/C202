#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//declaração de variáveis
	float  x,y;
	
	//entrada de dados
	cout<<"Declare o primeiro número:";
	cin>>x;
	cout<<"Declare o segundo número:";
	cin>>y;
	
	//condição
	if (x == y)
		cout<<"o primeiro é igual ao segundo";
	if (x >= y)
		cout<<"o primeiro é maior que o segundo";
	if (x < y)
		cout<<"o primeiro é menor que o segundo";
	
	return 0;
	
}