#include <iostream>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	//declara��o de vari�veis
	double soma = 0, x;
	
	for(int i = 1; i <=5; i++)
	{
		cin>>x; 
		soma = soma + x;
	}
	
	cout<<"Soma = "<<soma<<endl;
	
	return 0;
	
}