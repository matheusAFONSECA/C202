#include <iostream>
#include <iomanip>

using namespace std;

int main()
{	
	//declara��o de vari�veis
	double S=0, N, x;
	
	//entrada do valor de N
	cin>>N;
	
	x=1; //n�mero que ficar� no denomidador 
	
	if(N<=1000)
	{
		while(x<=N)//condi��o para repeti��o do la�o
		{
			S = S + (1/x); //soma dos termos de S
			x++;
		}
	}
	
	//saida de dados
	cout<<fixed<<setprecision(4);
	cout<<"S = "<<S<<endl;
	
	return 0;

}