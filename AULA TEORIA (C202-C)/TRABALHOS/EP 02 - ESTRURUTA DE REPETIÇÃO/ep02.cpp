#include <iostream>
#include <locale>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");  //aceitar o idioma portugu�s
	
	//declara��o de vari�veis
	double soma, d, x, e;
	
	//entrada do valor de x
	cout<<"Entre com o valor de x: ";
	cin>>x;
	
	d=50;  //valor do denominador da fun��o
	
	soma=0;  /*soma tem que ter um valor j� predeterminado
			para n�o ter um valor lixo colocado nele*/
			
	e=1;  //valor que vai elevar o n�mero
	
	for(int i=1; i<=50; i++)
	{
		soma=soma+pow(x,e)/d;
		d=d-1;
		e++;
	}
	
	//saida de dados
	cout<<fixed<<setprecision(2);  //saida de f(x) com duas casas decimais
	cout<<endl<<"f(x)= "<<soma<<endl;
	
	return 0;
	
}