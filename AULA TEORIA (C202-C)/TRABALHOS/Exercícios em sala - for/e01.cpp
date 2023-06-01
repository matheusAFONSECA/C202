#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	//declaração de variáveis
	double x, n, s=0;
	
	//entrada do valor de x
	cout<<"Declare o valor de X: ";
	cin>>x;
	cout<<"Declare o números de termos: ";
	cin>>n;
	
	//primeiro julga se é possivel calcular o f(x)
	if (x==0)
			cout<<"Cálculo impossível para este valor de x"<<endl;
		
	//inicio do ciclo (comando for) e calculo da função
	if (x>0)
	{
		for(int m=1; m<=1; m++)//comando for para indicar f(x) somente se x>0
  	  {	
			for (int i=1; i<=n; i++)//calculo do valor de f(x)
			{
				s = i/(pow(x,i));
			}
	
		cout<<"O f(x) vale: "<<s<<endl;
		}
	}
	
	return 0;
	
}