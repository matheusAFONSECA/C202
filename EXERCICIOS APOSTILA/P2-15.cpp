#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	
	setlocale (LC_ALL, "Portuguese");
	
	//declara��o de vari�veis
	double sb, st;
	
	//entrada de dados
	cout<<"Declare o sal�rio base: ";
	cin>>sb;
	
	//calculos
	st = (sb*1.05) * 0.93;
	
	//saida de dados
	cout<<"Sal�rio total: "<<st<<endl;
	
	return 0;
	
}