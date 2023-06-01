#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Potuguese");
	//entrada de variáveis
	float real, dolar, euro;
	
	//entrada de dados
	cout << "Digite o valor em R$:";
	cin >> real;
	
	//calculo
	dolar = real / 5.60;
	euro = real / 6.70; 
	 
	//saida de dados
	cout << fixed << setprecision(2); //fixa em duas casas decimais
	cout << "Valor em dolar:" << dolar << endl;
	cout << "Valor em euro:" << euro << endl; 
	
	return 0;
}

