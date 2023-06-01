#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	//entrada de variáveis
	int x,y,z;
	
	//entrada de dados
	cout<<"Declare o primeiro valor:";
	cin>>x;
	cout<<"Declare o segundo valor:";
	cin>>y;
	
	//calculos
	z = x % y;
	
	//saida de dados
	cout<<"valor do número mais proximo e divisivel inteiro:"<<z;
	
	return 0;
	
}