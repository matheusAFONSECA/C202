#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//declara��o de vari�veis
	float  x,y;
	
	//entrada de dados
	cout<<"Declare o primeiro n�mero:";
	cin>>x;
	cout<<"Declare o segundo n�mero:";
	cin>>y;
	
	//condi��o
	if (x == y)
		cout<<"o primeiro � igual ao segundo";
	if (x >= y)
		cout<<"o primeiro � maior que o segundo";
	if (x < y)
		cout<<"o primeiro � menor que o segundo";
	
	return 0;
	
}