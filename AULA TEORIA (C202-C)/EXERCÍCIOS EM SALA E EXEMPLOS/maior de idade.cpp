#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//declara��o de dados
	int idade;
	
	//entrada de dados
	cout<<"Declare a sua idade:";
	cin>>idade;
	
	//condi��o
	if (idade >= 18)
	    cout<<"Maior de idade";
	if (idade < 18)
	    cout<<"Menor de idade";
	
    return 0;
	
}