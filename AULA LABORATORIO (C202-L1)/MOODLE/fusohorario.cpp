#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{	
	setlocale (LC_ALL, "Poruguese");
	
	//declaração de variáveis
	int S, T, F, H;
	
	//entrada de dados
	cout<<"Declare a hora da saída, o tempo de viagem e o fuso horário do destino com relação à origem:"<<endl;
	cin>>S>>T>>F;
	
	//calculo
	H = S + T + F;
	
	//condição e saída de dados
	if (H < 24 && H > 0)
		cout<<H<<endl;
		else if (H > 24)
			cout<<H - 24<<endl;
			else if (H < 24)
				cout<<H + 24<<endl;
					  else 
					  	cout<<H<<endl;  /*coloquei esse para representar a condição H = 0*/
					  
	return 0;		
	
}