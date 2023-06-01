#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	
	setlocale (LC_ALL, "Portuguese");
	
	//declaração de variáveis
	double sb, st;
	
	//entrada de dados
	cout<<"Declare o salário base: ";
	cin>>sb;
	
	//calculos
	st = (sb*1.05) * 0.93;
	
	//saida de dados
	cout<<"Salário total: "<<st<<endl;
	
	return 0;
	
}