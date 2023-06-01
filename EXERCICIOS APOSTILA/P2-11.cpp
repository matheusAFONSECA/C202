#include <iostream>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	//declaração de variáveis
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
	cout<<"A área do cômodo e: "<<M<<endl;
	cout<<"A potência do cômodo é: "<<P<<endl;
	
	return 0;
	
}