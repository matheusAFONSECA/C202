#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	//declara��o de vari�veis
	float  ind, idade;
	char  nome[60];
	
	//declara��o de dados 
	cout<<"Declare a sua idade:";
	cin>>idade;
    cout<<"Digite o seu nome:";
	cin>>nome;
	
	//calculo
	ind = idade * 1/42 - (idade -3);
	
	//saida de dados
	cout<<fixed<<setprecision(4);
	cout<<"O �ndice de "<<nome<<" � "<<ind;
	
	return 0;
	
}