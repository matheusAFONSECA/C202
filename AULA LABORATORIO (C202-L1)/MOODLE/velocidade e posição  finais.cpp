#include <iostream> //biblioteca iostream
using namespace std;
int main()
{
	setlocale (LC_ALL, "Portuguese");
	//declara��o das vari�veis
	float  v0, s0, v, s, a, t;
	
	//entrada de dados
	cout<<"Digite a velocidade inicial:";
	cin>>v0;
	cout<<"Digite a posi��o inicial:";
	cin>>s0;
	cout<<"Digite a acelera��o:";
	cin>>a;
	cout<<"Digite o tempo:";
	cin>>t;
	
	//calculos 
	v = v0 + a*t;
	s = s0 + v0*t + 1./2*a*t*t;
	
	//saida
	cout<<"Velocidade final ="<< v << endl;
	cout<<"Dist�ncia final ="<< s << endl;
	
	
	
	return 0;
}