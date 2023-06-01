#include <iostream>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	//declaração de variáveis
	int A, B, C, D;
	
	//entrada de dados
	cout<<"Declare os valores A, B, C e D: ";
	cin>>A>>B>>C>>D;
	
	//condições e saida de dados
	if (B>C && D>A && C+D>A+B && C>0 && D>0 && A%2==0)
		cout<<"Valores aceitos"<<endl;
	else 
		cout<<"Valores não aceitos"<<endl;
	
	return 0;
	
	
}