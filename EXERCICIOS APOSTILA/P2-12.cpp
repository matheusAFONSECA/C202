#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	//declaração de variáveis
	int N, m, dm, cm, mm, r, r1;
	
	//entrada de dados
	cout<<"Declare o número: ";
	cin>>N;
	
	//calculos
	m = (N/1000);
	r = N%1000;
	dm = r/100;
	r1 = r%100;
	cm = r1/10;
	mm = r1%10;
	
	//saida de dados
	cout<<m<<" metros,"<<dm<<" decímetros,"<<cm<<" centímetros e "<<mm<<" milímetros"<<endl;
	
	return 0;
	
}