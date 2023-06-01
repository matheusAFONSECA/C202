#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	
	//declaração de variáveis
	double N, menor=0, soma=0, media;
	int S, y=0 , x=0;
	
	//entrada da primeira altura
	cin>>N;
	
	//inicio de ciclo
	while(N!=(-1))
	{
		if (menor==0)
			menor=N;
		else if(menor>=N)
			menor=N;
		cin>>S;
		switch(S)
		{
			case 1:
				y++;
				break;
			case  2:
			{
				x++;
				soma = soma + N;
				break;
			}
		}
		cin>>N;
	}
	media = soma/x;
	
	//saida de dados
	cout<<fixed<<setprecision(2);
	cout<<y<<" Hom"<<endl;
	cout<<"Menor altura: "<<menor<<endl;
	cout<<"Média: "<<media<<endl;
	
	return 0;
	
}