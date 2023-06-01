#include <iostream>
#include <locale>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	
	//declara��o das vari�veis
	double PA, QM;
	
	//entrada de dados
	cout<<"Declare a quantidade e pre�o atual do produto vendido no m�s: ";
	cin>>QM>>PA;
	
	//condi��o e saida de dados
	cout<<fixed<<setprecision(2);
	if (PA < 0 || QM < 0)
		cout<<"Erro de entrada"<<endl;
	else if (QM <= 0)
		cout<<"Novo pre�o: R$"<<PA*0.9<<"(pre�o reduzido)"<<endl;
	else if (QM > 0 && QM < 500)
		cout<<"Novo pre�o: R$"<<PA<<"(pre�o sem reajuste)"<<endl;
	else if (QM>=500 && QM < 1000)
		cout<<"Novo pre�o: R$"<<PA*1.1<<"(pre�o aumentado)"<<endl;
	else if (QM >= 1000)
		cout<<"Novo pre�o: R$"<<PA*1.15<<"(pre�o aumentado)"<<endl;
	
	return 0;
	
}