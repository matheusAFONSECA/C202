#include <iostream>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	//declara��o de vari�veis
	char nome[20];
	double p1, p2, p3, MF;
	
	//entrada 
	cout<<"Declare a nota da nota de laborat�rio: ";
	cin>>p1;
	cout<<"Declare a nota do exame intermedi�rio: ";
	cin>>p2;
	cout<<"Declare a nota do exame final: ";
	cin>>p3;
	cout<<"Declare o nome do aluno: ";
	cin>>nome;
	
	//calculos
	MF = (p1*0.2 + p2*0.3 + p3*0.5);
	
	//saida de dados
	cout<<"NOME: "<<nome<<endl<<endl;
	cout<<"Nota de laborat�rio: "<<p1<<endl;
	cout<<"Exame intermedi�rio: "<<p2<<endl;
	cout<<"Exame final: "<<p3<<endl<<endl;
	cout<<"M�dia final: "<<MF<<endl;
	
	return 0;
	
}