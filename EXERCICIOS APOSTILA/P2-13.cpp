#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	//declaração de variáveis
	int m, n, m1, r, r1;
	
	cout<<"Declare o número: ";
	cin>>n;
	
	//calculo
	m = n%10;
	r = n/10;
	m1 = r%10;
	r1 = r/10; 
	
	//saida de dados
	cout<<m<<m1<<r1<<endl;
	
	return 0;

}