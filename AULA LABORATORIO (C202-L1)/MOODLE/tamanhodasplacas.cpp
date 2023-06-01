#include <iostream>

using namespace std;

int main()
{
	//declaração de variáveis
	int X, Y, M, Xi, Yi, m, DM, dm;
	
	//entrada de dados
	cin>>X>>Y>>M; //entrada da dimensões da placa diponivel
	m=1;
	DM = X*Y;  //area maxima da placa disponivel
	
	//inicio do ciclo
	while(M <= 105)
	{
		while(m<=M)
		{
			cin>>Xi>>Yi;  //entrada da dimensão que o cliente quer
			dm=Xi*Yi;  //area da placa do cliente
			if (dm<=DM)
				cout<<"Sim"<<endl;
			else
				cout<<"Nao"<<endl;
			m++;
		}
	}
	
	return 0;
	
}