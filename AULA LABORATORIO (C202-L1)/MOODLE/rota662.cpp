#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Poruguese");
	
	//declara��o de vari�veis
	double i, m, o, n, a, ne, v, s, d;
	
	//entrada de dados
	cout<<"Declare o valor gasto em Illinois, Missouri, Oklahoma, Novo M�xico, Arizona e Nevada, respectivamente: "<<endl;
	cin>>i>>m>>o>>n>>a>>ne;
	cout<<"Declare o valor que maria possuia: ";
	cin>>v;
	
	//calculo
	s = v - (i + m + o + a + n + ne);
	d = - s;
	//saida de dados e condi��o
	cout<<fixed<<setprecision(2);
	if (s >= 0)
		cout<<"Sobrou: R$ "<<s;
	else 
		cout<<"Deve: R$ "<<d;
	
	return 0;
		
}