#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//declaração de variáveis
	float  A, B, C, MP, MS;
	char X;
	
	//entrada de dados
	cout<<"Entre com os tres valores A, B e C, respectivamente: ";
	cin>>A>>B>>C;
	cout<<"Qual operação se deseja fazer: 1 p/ MP e 2 p/ MS: ";
	cin>>X;
	
	//calculos
	MP = ((A * 5) + (B * 3) + (C * 2)) / 10;
	MS = (A + B + C) / 3;
	
	switch (X)
	{
		 case '1': 
		 	cout<<"Média Ponderada = "<<MP<<endl;
			 break;
		 case '2':
		 	cout<<"Média simples = "<<MS<<endl;
			 break;
		 default:
		 	cout<<"Opção errada ..."<<endl;
	}
	
	return 0;
	
}