#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//declara��o de vari�veis
	float  A, B, C, MP, MS;
	char X;
	
	//entrada de dados
	cout<<"Entre com os tres valores A, B e C, respectivamente: ";
	cin>>A>>B>>C;
	cout<<"Qual opera��o se deseja fazer: 1 p/ MP e 2 p/ MS: ";
	cin>>X;
	
	//calculos
	MP = ((A * 5) + (B * 3) + (C * 2)) / 10;
	MS = (A + B + C) / 3;
	
	switch (X)
	{
		 case '1': 
		 	cout<<"M�dia Ponderada = "<<MP<<endl;
			 break;
		 case '2':
		 	cout<<"M�dia simples = "<<MS<<endl;
			 break;
		 default:
		 	cout<<"Op��o errada ..."<<endl;
	}
	
	return 0;
	
}