#include <iostream>
#include <locale>

using namespace std;

int main()
{	
	setlocale (LC_ALL,"Portuguese");
	
	//declaração de variáveis
	int n, i, f=1;
	
	//entrada do número
	cout<<"Declare o Número: ";
	cin>>n;
	
	//calculo do fatorial
	for(i=1; i<=n; i++)
	{
		f= f*i;
	}
	
	//saida de dados
	cout<<"fatorial de "<<n<<" é: "<<f<<endl;
	
	return 0;
	
}