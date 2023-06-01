#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//declaração de variáveis
	int x, y ,z;
	
	//entrada de dados
	cout<<"Declare o valor de x:";
	cin>>x;
	cout<<"Declare o valor de y:";
	cin>>y;
	
	//calculo
	z = x % y;
	
	//condição e saída de dados
	if(z == 0)
		cout<<"sim, são multiplos";
	if(z > 0)
		cout<<"não, não são multiplos";
	
	return 0;
	
}