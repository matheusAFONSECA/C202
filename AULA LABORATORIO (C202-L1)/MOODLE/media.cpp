#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{	
	setlocale (LC_ALL,"Portuguese");
	
	//declara��o de vari�veis
	int i;
	double r, soma=0, x;
	
	//entrada de dados
	cout<<"Declare o valor das notas: ";
	
	for(i=1 ;i<=10 ;i++)
	{
		cin>>x;
		soma = soma + x;// soma das notas	
	}
	
	r = soma / 10; //calculo da m�dia das notas
	
	//saida de dados
	cout<<fixed<<setprecision(2);
	cout<<"M�dia: "<<r<<endl;
	
}