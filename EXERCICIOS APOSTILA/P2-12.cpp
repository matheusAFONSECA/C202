#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	//declara��o de vari�veis
	int N, m, dm, cm, mm, r, r1;
	
	//entrada de dados
	cout<<"Declare o n�mero: ";
	cin>>N;
	
	//calculos
	m = (N/1000);
	r = N%1000;
	dm = r/100;
	r1 = r%100;
	cm = r1/10;
	mm = r1%10;
	
	//saida de dados
	cout<<m<<" metros,"<<dm<<" dec�metros,"<<cm<<" cent�metros e "<<mm<<" mil�metros"<<endl;
	
	return 0;
	
}