#include <iostream>
#include <iomanip>  //para utilizar a fun��o setprecision
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	//declara��o de vari�veis
	float PV1, PV2, EP, MF;
	
	//entrada de dados
	cout << "Digite o valor da Prova 1:";
	cin >> PV1;
	cout << "Digite o valor da Prova 2:";
	cin >> PV2;
	cout << "Digite o valor dos  Exerc�cios propostos:";
	cin >> EP;
	
	//calculo
	MF = (PV1+PV2)/2*0.9 + EP*0.1;
	
	//saida de dados
	cout << fixed << setprecision (2);
	cout << "Resultado da M�dia Final:" << MF;
	
	return 0;
}