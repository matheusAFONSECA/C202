#include <iostream>
#include <locale>

using namespace std;

int main()
{	
	setlocale (LC_ALL,"Portuguese");
	
	//declara��o de vari�veis
	int n, i, x, maior, menor;
	
	//entrada de dados
	cout<<"Declare o n�mero de termos avaliados: ";
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
	cout<<"Maior n�mero: "<<maior<<endl;
	cout<<"Menor n�mero: "<<menor<<endl;
	
	return 0;
	
}