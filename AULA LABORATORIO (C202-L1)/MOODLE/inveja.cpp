#include <iostream>
#include <locale>

using namespace std;

int main()
{	
	setlocale (LC_ALL,"Portuguese");
	
	//declaração de variáveis
	int n, i, f, F, j;
	
	//entrada do número
	cout<<"Declare o Número: ";
	cin>>n;
	
	//calculo do fatorial
	if (n%2==0)
	{
		f=1;
		for(i=1; i<=n; i++)
		{
			   	f= f*i;
		}
	}
	else 
	{
		f=1;
		F=1;                                        
  		{                                         
			if (n == 1) //valor de 1 na sequencia de fibonacci
				f=0;               
			else if (n%2==1) 
			{
				for (i=3; i<=n; i++ ) //a prtir do 3 que ocorre a verdaira sequencia
				{
					j = f + F;
					f=F;
					F=j;
				}
			}
    	}    
    }    
	
	//saida de dados
	cout<<"o resutado é: "<<f<<endl;
	
	return 0;
	
}