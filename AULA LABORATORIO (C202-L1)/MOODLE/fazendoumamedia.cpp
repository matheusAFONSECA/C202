#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//declara��o de vari�veis
	int y=0;
	double x, soma=0, media;
	
	//entrada do primeiro termo
	cin>>x;
	
	while(x>=0) //condi��o para um n�mero entrar no la�o while
	{
		soma = soma+x; //soma dos termos validos
		y++;  //n�mero que vai dividir a soma 
		media = soma/y;  //calculo da m�dia
		cin>>x;	
	}
	
	cout<<fixed<<setprecision(2);
	cout<<"media = "<<media<<endl;
	
	return 0;
}