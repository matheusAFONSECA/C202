#include <iostream>

using namespace std;

int main()
{
	//declara��o de vari�veis
	int x=0, id, n;

	//entrada do n�mero de pessoas
	cout<<"Quantas pessoas?";
	cin>>n;
	
	//entrada de dados e inicio do ciclo continuo (for)
	for (int i=1; i<=n; i++)
	{
		cin>>id; //entrada da idade da pessoa 
		if (id>21)
			x++;//entrada de dados para a vari�vel x
	}
	
	cout<<"N�mero de pessoas maior de 21 anos: "<<x<<endl;
	
	return 0;
	
}