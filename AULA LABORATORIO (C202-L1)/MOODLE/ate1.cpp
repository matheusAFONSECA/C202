#include <iostream>

using namespace std;

int main()
{
	//declara��o de vari�veis
	int x, soma=0;
	
	//entrada do primeiro termo
	cin>>x;
	
	while(x!=-1)
	{
		soma = soma+x;
		cin>>x;	
	}
	
	cout<<"soma = "<<soma<<endl;
	
	return 0;
}