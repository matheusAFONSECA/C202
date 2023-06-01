#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//declaração de dados
	int idade;
	
	//entrada de dados
	cout<<"Declare a sua idade:";
	cin>>idade;
	
	//condição
	if (idade >= 18)
	    cout<<"Maior de idade";
	if (idade < 18)
	    cout<<"Menor de idade";
	
    return 0;
	
}