#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	//declara��o de vari�veis
	double p, pol, j, m;
	
	//entrada de dados
	cout<<"Declare os p�s: ";
	cin>>p;
	
	//convers�es
	pol = 12*p;
	j = 3*p;
	m = 1760*j;
	
	//saida de dados
	cout<<"POLEGADAS: "<<pol<<endl;
	cout<<"JARDAS: "<<j<<endl;
	cout<<"MILHAS: "<<m<<endl;
	
	return 0;
	
}