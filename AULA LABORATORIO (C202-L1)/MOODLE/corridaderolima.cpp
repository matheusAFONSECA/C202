#include <iostream>
#include <locale>

using namespace std;

int main()
{	
	setlocale (LC_ALL,"Portuguese");
	
	//declara��o de vari�veis
	int n, x, menor, r=1;
	
	//entrada do n�mero de pessoas
	cout<<"Quantas pessoas participaram? ";
	cin>>n;
	
	//inicio do comando for - entrada do tempo que as pessoas gastaram 
	for(int i=1; i<=n; i++)
	{
		cout<<"Declare o tempo da pessoa "<<i<<":";
		cin>>x;
		if(i==1)
			menor = x;
		else if(x<=menor)
		{
			menor = x;
			r = i;
		}
	}
	cout<<"Indice: "<<r<<endl;
	
	return 0;
	
}