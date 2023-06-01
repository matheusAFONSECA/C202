#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	//declaração de variáveis
	double v, t, d, l;
	
	//entrada de dados
	cout<<"Declare a velocidade média e o tempo da viagem em horas: ";
	cin>>v>>t;
	cout<<endl;
	
	//calculos
	d = v*t;
	l = d*11;
	
	//saida de dados
	cout<<"VELOCIDADE MÉDIA: "<<v<<" km/hora"<<endl;
	cout<<"TEMPO DE VIAGEM: "<<t<<" hora(s)"<<endl;
	cout<<"DISTÂNCIA: "<<d<<" KM"<<endl;
	cout<<"LITROS DE COMBUSTÍVEL: "<<l<< "L"<<endl;
	
	return 0;
	
}