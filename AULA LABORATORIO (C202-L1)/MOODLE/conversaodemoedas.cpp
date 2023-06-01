#include <iostream>
#include <iomanip>

using namespace std;

int main()
{	
	//declaração de variáveis
	double P;
	int C;
	
	//entrada do valor que quer ser convertido
	cin>>P;
	cin>>C;
	
	//saida de dados
	cout<<fixed<<setprecision(2);
	switch (C)
	{
		case 1: 
			cout<<P*3.86<<endl; //EUA
			break;
		case 2: 
			cout<<P*3.77<<endl; //Suiça
			break;
		case 3: 
			cout<<P*4.41<<endl; //França
			break;
		case 4: 
			cout<<P*0.19<<endl; //México
			break;
		case 5: 
			cout<<P*5<<endl; //Inglaterra
			break;
	}
	
	return 0;
	
}