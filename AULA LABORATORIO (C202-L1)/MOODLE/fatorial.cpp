#include <iostream>
#include <locale>

using namespace std;

int main()
{	
	setlocale (LC_ALL,"Portuguese");
	
	//declara��o de vari�veis
	int n, i, f=1;
	
	//entrada do n�mero
	cout<<"Declare o N�mero: ";
	cin>>n;
	
	//calculo do fatorial
	for(i=1; i<=n; i++)
	{
		f= f*i;
	}
	
	//saida de dados
	cout<<"fatorial de "<<n<<" �: "<<f<<endl;
	
	return 0;
	
}