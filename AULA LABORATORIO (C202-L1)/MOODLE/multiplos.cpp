#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//declara��o de vari�veis
	int x, y ,z;
	
	//entrada de dados
	cout<<"Declare o valor de x:";
	cin>>x;
	cout<<"Declare o valor de y:";
	cin>>y;
	
	//calculo
	z = x % y;
	
	//condi��o e sa�da de dados
	if(z == 0)
		cout<<"sim, s�o multiplos";
	if(z > 0)
		cout<<"n�o, n�o s�o multiplos";
	
	return 0;
	
}