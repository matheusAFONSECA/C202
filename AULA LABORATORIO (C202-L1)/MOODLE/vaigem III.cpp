#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//declara��o de vari�veis
	float  x,y,z,a,b,c;
	
	//declara��o de valores
	cout<<"Valor que ser� convertido para d�lar:";
	cin>>x;
	cout<<"valor que ser� convertido em libra:";
	cin>>y;
	cout<<"valor que ser� convertido em euro:";
	cin>>z;
	
	//calculo
	a = x / 4.04;
	b = y / 5.32;
	c = z / 4.60;
	
	//saida de dados
	cout<<fixed<<setprecision(2);
	cout<<"Valor em d�lar:"<<a<<endl;
	cout<<"Valor em libra:"<<b<<endl;
	cout<<"Valor em euro:"<<c<<endl;
	
	return 0;
		
}