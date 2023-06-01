#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	//declaração de variáveis
	int   x, y;
	float  perimetro;
	
	//entrada de dados
	cout<<"Declare a largura:";
	cin>>x;
	cout<<"Declare a altura:";
	cin>>y;
	
	//calculo
	perimetro = x+x+y+y;
	
	//saida de dados
	cout<<"O perímetro do retângulo é:"<<perimetro;
	
	return 0; 
}