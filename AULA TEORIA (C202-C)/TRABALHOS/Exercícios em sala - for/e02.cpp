#include <iostream>

using namespace std;

int main()
{	
	//declaração de variáveis
	double sinal=1, soma=1, den, num=3;
	
	//inicio do comando for
	for (int i=1; i<=4; i++)
	{
		//fatorial do numerador
		den = 1;
		for (int j=2; j<=num; j++)
			den = den*j;
		
		//calculo do f(x)
		soma = soma + (num/den)*(sinal);
		num = num+2; //adiciona 2 no numerador
		sinal = sinal*(-1); //define se o proximo valor vai ser somado ou subtraido
		
	}
	
	cout<<"f(x): "<<soma<<endl;
	return 0;
	
}