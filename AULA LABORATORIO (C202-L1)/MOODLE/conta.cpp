#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{	
	setlocale (LC_ALL,"Portuguese");
	
	//declaração de variáveis
	int i, p=0;
	double r, soma=0, x;
	
	//entrada de dados
	cout<<"Entre com os números: ";
	
	for(i=1 ;i<=10 ;i++)
	{
		cin>>x;
		
		if(x>0)
			p = p+1;
		
		soma = soma + x;// soma do termos	
	}
	
	r = soma / 10; //calculo da média 
	
	//saida de dados
	cout<<fixed<<setprecision(2);
	cout<<"Positivos: "<<p<<endl;
	cout<<"Média: "<<r<<endl;
	
}