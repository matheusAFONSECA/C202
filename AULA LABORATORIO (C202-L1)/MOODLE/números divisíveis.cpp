#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	//entrada de vari�veis
	int x,y,z;
	
	//entrada de dados
	cout<<"Declare o primeiro valor:";
	cin>>x;
	cout<<"Declare o segundo valor:";
	cin>>y;
	
	//calculos
	z = x % y;
	
	//saida de dados
	cout<<"valor do n�mero mais proximo e divisivel inteiro:"<<z;
	
	return 0;
	
}