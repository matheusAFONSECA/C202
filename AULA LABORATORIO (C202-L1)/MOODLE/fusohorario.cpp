#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{	
	setlocale (LC_ALL, "Poruguese");
	
	//declara��o de vari�veis
	int S, T, F, H;
	
	//entrada de dados
	cout<<"Declare a hora da sa�da, o tempo de viagem e o fuso hor�rio do destino com rela��o � origem:"<<endl;
	cin>>S>>T>>F;
	
	//calculo
	H = S + T + F;
	
	//condi��o e sa�da de dados
	if (H < 24 && H > 0)
		cout<<H<<endl;
		else if (H > 24)
			cout<<H - 24<<endl;
			else if (H < 24)
				cout<<H + 24<<endl;
					  else 
					  	cout<<H<<endl;  /*coloquei esse para representar a condi��o H = 0*/
					  
	return 0;		
	
}