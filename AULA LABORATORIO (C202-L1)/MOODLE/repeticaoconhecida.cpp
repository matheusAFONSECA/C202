#include <iostream>
#include <iomanip>

using namespace std;

int main()
{	
	//declaração de variáveis
	double S=0, N, x;
	
	//entrada do valor de N
	cin>>N;
	
	x=1; //número que ficará no denomidador 
	
	if(N<=1000)
	{
		while(x<=N)//condição para repetição do laço
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