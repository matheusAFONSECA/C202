#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	//declara��o de vari�veis
	int p, j1, m2, r, a, soma;
	
	//entrada de dados
	cout<<"Defina se jo�o escolheu um n�mero par(1) ou se escolheu (impar): ";
	cin>>p;
	cout<<"Declare o n�mero escolhido por jo�o: ";
	cin>>j1;
	cout<<"Declare o n�emro escolhido por maria: ";
	cin>>m2;
	cout<<"Defina se jo�o roubou(1) ou n�o roubou(2): ";
	cin>>r;
	cout<<"Defina se maria acusou(1) ou n�o acusou(2) jo�o de roubo: ";
	cin>>a;
	
	//calculo para saber qual o resto da soma
	soma = j1 + m2;
	 
	//condi��es e sa�das de dados
	if (p==1 && soma%2==0 && r==1 && a==0)	
		cout<<"Jo�o ganha!"<<endl;
	else if (p==0 && soma%2!=0 && r==1 && a==0)
		cout<<"Jo�o ganha!"<<endl;
	else if (p==0 && soma%2!=0 && r==1 && a==1)
		cout<<"Maria ganha!"<<endl;
	else if (p==1 && soma%2!=0 && r==0 && a==0)
		cout<<"Maria ganha!"<<endl;
	else if (p==1 && soma%2!=0 && r==1 && a==0)
		cout<<"Jo�o ganha!"<<endl;
	else if (p==1 && soma%2!=0 && r==1 && a==1)
		cout<<"Maria ganha!"<<endl;
	
	return 0;
	
}