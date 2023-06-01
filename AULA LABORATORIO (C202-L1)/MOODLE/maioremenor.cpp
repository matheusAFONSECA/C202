#include <iostream>
#include <locale>

using namespace std;

int main()
{	
	setlocale (LC_ALL,"Portuguese");
	
	//declaração de variáveis
	int n, i, x, maior, menor;
	
	//entrada de dados
	cout<<"Declare o número de termos avaliados: ";
	cin>>n; 
	
	for(i=1 ;i<=n ;i++)
	{
		cin>>x;
		if (i==1)
		{
			menor = x;
			maior = x;
		}
		else
		{
			if (x>maior)
				maior = x;
			else if (x<menor)
				menor = x;
		} 
	}
	
	//saida de dados
	cout<<"Maior número: "<<maior<<endl;
	cout<<"Menor número: "<<menor<<endl;
	
	return 0;
	
}