#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main()
{	
	setlocale(LC_ALL,"Portuguese");
	//declara��o de vari�veis
	double S=0, x, n;
	
	//entrada do valor de N
	cin>>x;
	
	while(S<10000)//condi��o para repeti��o do la�o
	{
		S = S + (x+n)/(n+1); //soma dos termos de S
		n++;
	}
	
	
	//saida de dados
	cout<<fixed<<setprecision(2);
	cout<<"S = "<<S<<endl;
	cout<<n<<" Repeti��es"<<endl;
	
	return 0;

}