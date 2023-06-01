#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	//declaração de variáveis
	float  ind, idade;
	char  nome[60];
	
	//declaração de dados 
	cout<<"Declare a sua idade:";
	cin>>idade;
    cout<<"Digite o seu nome:";
	cin>>nome;
	
	//calculo
	ind = idade * 1/42 - (idade -3);
	
	//saida de dados
	cout<<fixed<<setprecision(4);
	cout<<"O índice de "<<nome<<" é "<<ind;
	
	return 0;
	
}