#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	//declaração de variáveis 
	int a, b;
	char nome[10], nome1[10];
	
	cout<<"Declare o primeiro nome:";
	cin>>nome;
	cout<<"Declara a idade:";
	cin>>a;
	cout<<"Declare o segundo nome:";
	cin>>nome1;
	cout<<"Declara a idade:";
	cin>>b; 
	//condição e saída de dados
	
	if (a==b)
		cout<<"As idades são iguais";
	else if (a<b)
		cout<<"O mais velho é "<<nome1;
	else
		cout<<"o mais velho é "<<nome;
	
	return 0;
}