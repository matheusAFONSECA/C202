#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//declaração de dados
	int horas, velocidade;
	float  distancia, litros;
	
	//entrada de dados
	cout<<"Tempo de ida em horas:";
	cin>>horas;
	cout<<"Velocidade média durante o percurso:";
	cin>>velocidade;
	
	//calculo
	distancia = velocidade * horas;
	litros = distancia/12;
	
	//saida de dados
	cout<<fixed<<setprecision(3);
	cout<<"Litros de combustível necessário:"<<litros;
	
	return 0;
	
}