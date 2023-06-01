#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main()
{	
	setlocale(LC_ALL,"Portuguese");
	//declaração de variáveis
	double S=0, x, n;
	
	//entrada do valor de N
	cin>>x;
	
	while(S<10000)//condição para repetição do laço
	{
		S = S + (x+n)/(n+1); //soma dos termos de S
		n++;
	}
	
	
	//saida de dados
	cout<<fixed<<setprecision(2);
	cout<<"S = "<<S<<endl;
	cout<<n<<" Repetições"<<endl;
	
	return 0;

}