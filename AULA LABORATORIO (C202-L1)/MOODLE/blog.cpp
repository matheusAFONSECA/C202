#include <iostream>

using namespace std;

int main()
{	
	//declaração de variáveis
	char C;
	
	//entrada de dados
	cin>>C;
	
	//saida de dados
	switch (C)
	{
		case 'a': 
			cout<<"Africa"<<endl;
			break;
		case 'b': 
			cout<<"America"<<endl;
			break;
		case 'c': 
			cout<<"Antartida"<<endl;
			break;
		case 'd': 
			cout<<"Asia"<<endl;
			break;
		case 'e': 
			cout<<"Europa"<<endl;
			break;
		case 'f': 
			cout<<"Oceania"<<endl;
			break;
		default: 
			cout<<"Opcao invalida!";
	}
	
	return 0;
	
}