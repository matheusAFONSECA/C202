#include <iostream>

using namespace std;

int main()
{
	//declara��o de vari�veis
	int X, Y, M, Xi, Yi, m, DM, dm;
	
	//entrada de dados
	cin>>X>>Y>>M; //entrada da dimens�es da placa diponivel
	m=1;
	DM = X*Y;  //area maxima da placa disponivel
	
	//inicio do ciclo
	while(M <= 105)
	{
		while(m<=M)
		{
			cin>>Xi>>Yi;  //entrada da dimens�o que o cliente quer
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