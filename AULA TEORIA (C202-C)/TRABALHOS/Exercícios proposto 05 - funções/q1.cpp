#include <iostream>
#include <iomanip>

using namespace std;

double converte(double mph){  //fu��o auxiliar
	return(mph*1.60934);  //calculo e retorno do valor de kmh
}

int main(){
	//declara��o de vari�veis
	double mph, kmh;
	
	//entrada de dados
	do{  //entrada do valor de mph
		cout<<"Declare o valor de milhas/hora: ";
		cin>>mph;
	}while(mph<0);
	
	kmh=converte(mph);  //chamada da fun��o auxiliar
	
	//saida de dados
	cout<<fixed<<setprecision(2);
	cout<<endl<<"km/h: "<<kmh<<endl;
	
	return 0;
}