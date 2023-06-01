#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	//declração de variáveis
	char nome[50];
	double v;
	int n;
	
	//entrada de dados
	cout<<"Declare o nome do comprador:";
	cin>>nome;
	cout<<"Declare a quantidade de morangos que se deseja comprar:";
	cin>>n;
	
	//calculo
	v = (34.90/12) * n;
	
	//saida de dados
	cout<<fixed<<setprecision(2);
	cout<<"Comprador:"<<nome<<endl<<"Valor da compra:"<<v<<endl;

	return 0;
	
}