#include <iostream>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	//declara��o de vari�veis
	double P, M, l1, l2;
	
	//entrada de dados
	cout<<"Declare o comprimento, em metros: ";
	cin>>l1;
	cout<<"Declare a largura, em metros: ";
	cin>>l2;
	
	//calculos
	M = l1*l2;
	P = M*18;
	
	//saida de dados
	cout<<"A �rea do c�modo e: "<<M<<endl;
	cout<<"A pot�ncia do c�modo �: "<<P<<endl;
	
	return 0;
	
}