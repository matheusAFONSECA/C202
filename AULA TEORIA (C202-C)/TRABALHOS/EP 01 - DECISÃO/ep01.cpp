#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	
	//declara��o de vari�veis
	float t;
	
	//entrada de dados
	cout<<"Declare o valor de t: "; 
	cin>>t;
	
	//condi��o e saida de dados
	if (t >= -1 && t<=1)
		cout<<"x(t) = "<<1-abs(t)<<endl;
	else 
		cout<<"x(t) = 0"<<endl;
	
	return 0;
	
}