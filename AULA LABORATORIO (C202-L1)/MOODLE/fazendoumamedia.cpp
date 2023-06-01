#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//declaração de variáveis
	int y=0;
	double x, soma=0, media;
	
	//entrada do primeiro termo
	cin>>x;
	
	while(x>=0) //condição para um número entrar no laço while
	{
		soma = soma+x; //soma dos termos validos
		y++;  //número que vai dividir a soma 
		media = soma/y;  //calculo da média
		cin>>x;	
	}
	
	cout<<fixed<<setprecision(2);
	cout<<"media = "<<media<<endl;
	
	return 0;
}