#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	//declara��o de vari�veis
	double v, t, d, l;
	
	//entrada de dados
	cout<<"Declare a velocidade m�dia e o tempo da viagem em horas: ";
	cin>>v>>t;
	cout<<endl;
	
	//calculos
	d = v*t;
	l = d*11;
	
	//saida de dados
	cout<<"VELOCIDADE M�DIA: "<<v<<" km/hora"<<endl;
	cout<<"TEMPO DE VIAGEM: "<<t<<" hora(s)"<<endl;
	cout<<"DIST�NCIA: "<<d<<" KM"<<endl;
	cout<<"LITROS DE COMBUST�VEL: "<<l<< "L"<<endl;
	
	return 0;
	
}