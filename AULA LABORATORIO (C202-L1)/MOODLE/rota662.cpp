#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Poruguese");
	
	//declaração de variáveis
	double i, m, o, n, a, ne, v, s, d;
	
	//entrada de dados
	cout<<"Declare o valor gasto em Illinois, Missouri, Oklahoma, Novo México, Arizona e Nevada, respectivamente: "<<endl;
	cin>>i>>m>>o>>n>>a>>ne;
	cout<<"Declare o valor que maria possuia: ";
	cin>>v;
	
	//calculo
	s = v - (i + m + o + a + n + ne);
	d = - s;
	//saida de dados e condição
	cout<<fixed<<setprecision(2);
	if (s >= 0)
		cout<<"Sobrou: R$ "<<s;
	else 
		cout<<"Deve: R$ "<<d;
	
	return 0;
		
}