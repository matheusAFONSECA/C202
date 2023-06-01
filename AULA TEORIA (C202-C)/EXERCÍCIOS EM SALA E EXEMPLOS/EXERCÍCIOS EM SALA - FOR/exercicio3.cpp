#include <iostream>

using namespace std;

int main()
{
	//declaração de variáveis
	int x=0, id, n;

	//entrada do número de pessoas
	cout<<"Quantas pessoas?";
	cin>>n;
	
	//entrada de dados e inicio do ciclo continuo (for)
	for (int i=1; i<=n; i++)
	{
		cin>>id; //entrada da idade da pessoa 
		if (id>21)
			x++;//entrada de dados para a variável x
	}
	
	cout<<"Número de pessoas maior de 21 anos: "<<x<<endl;
	
	return 0;
	
}