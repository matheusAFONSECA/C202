#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	//declaração de variáveis
	double x, f, n, e=1, fatorial=1, soma=0;
	int i;
	
	//entrada de x e do n° de termos
	cout<<"Valor de x: ";
	cin>>x;  
	cout<<"Quantos termos? ";
	cin>>n;
	
	//calculo de f(x)
	for(i=1; i<=n; i++){
		
		//calculo do fatorial que é denominador do termo
		for(int m=e; m<=e+1; m++){
		fatorial=fatorial*m;
		}
		f = pow(x,e)/ fatorial;  //calculo do termo
		soma=soma+f;  //soma dos termos
		e = e+2;  //expoente de x do termo
	}
	
	//saida de dados
	cout<<fixed<<setprecision(6);
	cout<<"f(x) = "<<soma<<endl;	
	
	return 0;
	
}