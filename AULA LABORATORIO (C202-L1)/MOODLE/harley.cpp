#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	//declaração de variáveis
	float moto1, moto2, moto3, v1, v2, v3;
	
	//entrada de dados
	cout<<"Declare os modelos das motos:";
	cin>> moto1>> moto2>> moto3;
	
	//calculo
	v1 = (10*moto1) - ((4/3)*moto1);
	v2 = (10*moto2) - ((4/3)*moto2);
	v3 = (10*moto3) - ((4/3)*moto3);
	
	//saída de dados e condições
	if ((v1>v2) && (v1>v3))
		cout<<"moto 1";
	else if ((v2>v1) && (v2>v3))
		cout<<"moto 2";
	    else 
		cout<<"moto 3";
			
   return 0;
}