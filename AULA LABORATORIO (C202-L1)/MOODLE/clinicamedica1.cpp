#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Poruguese");
	
	//declaração de variáveis
	double I, P, A, IMC;
	char nome[10], nome2 [20];
	
	//entrada de dados
	cout<<"Declare a idade: ";
	cin>>I;
	cout<<"Declare o nome: ";
	cin>>nome>>nome2;
	cout<<"Declare a altura: ";
	cin>>A;
	cout<<"Declare o peso: ";
	cin>>P;
	
	//calculo
	IMC = P / pow(A,2);
	
	//saida de dados
	cout<<"Nome: "<<nome<<" "<<nome2<<endl;
	cout<<"Idade: "<<I<<endl;
	cout<<fixed<<setprecision(2);
	cout<<"IMC: "<<IMC<<"kg/m^2"<<endl;
	
	//condição de peso segundo o IMC
	if (IMC <= 15)
		cout<<"Extremamente abaixo do peso"<<endl;
	else if (IMC > 15 && IMC <=16)
		cout<<"Gravemente abaixo do peso"<<endl;
	else if (IMC > 16 && IMC <= 18.5)
		cout<<"Abaixo do peso ideal"<<endl;
	else if (IMC > 18.5 && IMC <= 25) 
		cout<<"Peso ideal"<<endl;
	else if (IMC > 25 && IMC <= 30)
		cout<<"Sobrepeso"<<endl;
	else if (IMC >30 && IMC <= 35)
		cout<<"Obesidade de grau I"<<endl;
	else if (IMC > 35 && IMC <= 40)
		cout<<"Obesidade de grau II (grave)"<<endl; 
	else if (IMC >= 40)
		cout<<"Obesidade de grau III (mórbida)"<<endl;
	
	return 0;							
	
}