#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	//declara��o de vari�veis 
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
	//condi��o e sa�da de dados
	
	if (a==b)
		cout<<"As idades s�o iguais";
	else if (a<b)
		cout<<"O mais velho � "<<nome1;
	else
		cout<<"o mais velho � "<<nome;
	
	return 0;
}