#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{	
	setlocale (LC_ALL,"Portuguese");
	
	//declara��o de vari�veis
	int i, p=0;
	double r, soma=0, x;
	
	//entrada de dados
	cout<<"Entre com os n�meros: ";
	
	for(i=1 ;i<=10 ;i++)
	{
		cin>>x;
		
		if(x>0)
			p = p+1;
		
		soma = soma + x;// soma do termos	
	}
	
	r = soma / 10; //calculo da m�dia 
	
	//saida de dados
	cout<<fixed<<setprecision(2);
	cout<<"Positivos: "<<p<<endl;
	cout<<"M�dia: "<<r<<endl;
	
}