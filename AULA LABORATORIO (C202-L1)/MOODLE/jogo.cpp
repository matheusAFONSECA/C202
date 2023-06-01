#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	//declaração de variáveis
	int p, j1, m2, r, a, soma;
	
	//entrada de dados
	cout<<"Defina se joão escolheu um número par(1) ou se escolheu (impar): ";
	cin>>p;
	cout<<"Declare o número escolhido por joão: ";
	cin>>j1;
	cout<<"Declare o núemro escolhido por maria: ";
	cin>>m2;
	cout<<"Defina se joão roubou(1) ou não roubou(2): ";
	cin>>r;
	cout<<"Defina se maria acusou(1) ou não acusou(2) joão de roubo: ";
	cin>>a;
	
	//calculo para saber qual o resto da soma
	soma = j1 + m2;
	 
	//condições e saídas de dados
	if (p==1 && soma%2==0 && r==1 && a==0)	
		cout<<"João ganha!"<<endl;
	else if (p==0 && soma%2!=0 && r==1 && a==0)
		cout<<"João ganha!"<<endl;
	else if (p==0 && soma%2!=0 && r==1 && a==1)
		cout<<"Maria ganha!"<<endl;
	else if (p==1 && soma%2!=0 && r==0 && a==0)
		cout<<"Maria ganha!"<<endl;
	else if (p==1 && soma%2!=0 && r==1 && a==0)
		cout<<"João ganha!"<<endl;
	else if (p==1 && soma%2!=0 && r==1 && a==1)
		cout<<"Maria ganha!"<<endl;
	
	return 0;
	
}