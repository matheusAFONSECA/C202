#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//declara��o de dados
	int horas, velocidade;
	float  distancia, litros;
	
	//entrada de dados
	cout<<"Tempo de ida em horas:";
	cin>>horas;
	cout<<"Velocidade m�dia durante o percurso:";
	cin>>velocidade;
	
	//calculo
	distancia = velocidade * horas;
	litros = distancia/12;
	
	//saida de dados
	cout<<fixed<<setprecision(3);
	cout<<"Litros de combust�vel necess�rio:"<<litros;
	
	return 0;
	
}