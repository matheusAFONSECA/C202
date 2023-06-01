#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	//declaração de variáveis
	int  k;
	double  q1, q2, d, f;
	
	//entrada de dados
	cout<<"Declare o valor da carga 1:";
	cin>>q1;
	cout<<"Declare o valor da carga 2:";
	cin>>q2;
	cout<<"Declare o valor da distância:";
	cin>>d;
	
	//calculo
	k=100;
	f = k * (q1*q2)/ pow(d,2);
	
	//saida de dados
	cout<<fixed<<setprecision(2);
	cout<<"O valor da força é:"<<f;
	
	return 0;
	
}
	