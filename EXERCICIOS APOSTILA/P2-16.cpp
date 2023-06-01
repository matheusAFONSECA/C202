#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	//declaração de variáveis
	double ida, ano, ano2;
	
	//entrada de dados
	cout<<"Declare o ano de nascimento: ";
	cin>>ano;
	cout<<"Declare o ano atual: ";
	cin>>ano2;
	
	//calculos
	ida = ano2 - ano;
	
	//saida de dados
	cout<<"Idade: "<<ida<<endl;
	cout<<"Idade em 2030:"<<2030-ano<<endl;
	
	return 0;
	
}