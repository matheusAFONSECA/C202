#include <iostream>
#include <locale>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	
	//declaração das variáveis
	double PA, QM;
	
	//entrada de dados
	cout<<"Declare a quantidade e preço atual do produto vendido no mês: ";
	cin>>QM>>PA;
	
	//condição e saida de dados
	cout<<fixed<<setprecision(2);
	if (PA < 0 || QM < 0)
		cout<<"Erro de entrada"<<endl;
	else if (QM <= 0)
		cout<<"Novo preço: R$"<<PA*0.9<<"(preço reduzido)"<<endl;
	else if (QM > 0 && QM < 500)
		cout<<"Novo preço: R$"<<PA<<"(preço sem reajuste)"<<endl;
	else if (QM>=500 && QM < 1000)
		cout<<"Novo preço: R$"<<PA*1.1<<"(preço aumentado)"<<endl;
	else if (QM >= 1000)
		cout<<"Novo preço: R$"<<PA*1.15<<"(preço aumentado)"<<endl;
	
	return 0;
	
}