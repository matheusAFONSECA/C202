#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	//declaração de variáveis
	int x,y,c;
	float p,z;
	
	//entrada de dados
	cout<<"Quantidade de notas:";
	cin>>x;
	cout<<"Valor das notas:";
	cin>>y;
	cout<<"Quantidade dos chocolates:";
	cin>>c;
	cout<<"Preço dos chocolates:";
	cin>>p;
	
	//calculo
	z = (x * y) - (p * c);
	
	//saida de dados
	cout<<fixed<<setprecision(2);
	cout<<"Dinheiro que sobrará:"<<z;
	
	return 0;
	
}