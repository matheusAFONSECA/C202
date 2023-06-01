#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//declaração de variáveis
	double mh, kmh;
	
	//entrada de dados
	do{
		cout<<"Digite a velocidade em mph (0 - 190): ";
		cin>>mh;  //entrada da velocidade
	}while(mh<0 || mh>190);
	
	//calculo
	kmh = mh*1.60934;  //converte a velocidade para km/h
	
	//saida de dados
	cout<<fixed<<setprecision(1);
	cout<<"Velocidade em km/h: "<<kmh<<endl;
	
	return 0;
	
}