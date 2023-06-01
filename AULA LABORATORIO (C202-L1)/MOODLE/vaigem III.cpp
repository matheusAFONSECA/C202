#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//declaração de variáveis
	float  x,y,z,a,b,c;
	
	//declaração de valores
	cout<<"Valor que será convertido para dólar:";
	cin>>x;
	cout<<"valor que será convertido em libra:";
	cin>>y;
	cout<<"valor que será convertido em euro:";
	cin>>z;
	
	//calculo
	a = x / 4.04;
	b = y / 5.32;
	c = z / 4.60;
	
	//saida de dados
	cout<<fixed<<setprecision(2);
	cout<<"Valor em dólar:"<<a<<endl;
	cout<<"Valor em libra:"<<b<<endl;
	cout<<"Valor em euro:"<<c<<endl;
	
	return 0;
		
}