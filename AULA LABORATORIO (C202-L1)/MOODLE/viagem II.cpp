#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	//declara��o de vari�veis
	int x,y,c;
	float p,z;
	
	//entrada de dados
	cout<<"Quantidade de notas:";
	cin>>x;
	cout<<"Valor das notas:";
	cin>>y;
	cout<<"Quantidade dos chocolates:";
	cin>>c;
	cout<<"Pre�o dos chocolates:";
	cin>>p;
	
	//calculo
	z = (x * y) - (p * c);
	
	//saida de dados
	cout<<fixed<<setprecision(2);
	cout<<"Dinheiro que sobrar�:"<<z;
	
	return 0;
	
}