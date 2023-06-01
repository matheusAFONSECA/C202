#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

struct ficha{
	int nmat;
	float np1, np2, md;
	char cond[10];
};

int main(){
	setlocale(LC_ALL, "Portuguese");
	//declaração de variavel aluno, do tipo ficha
	ficha aluno;
	
	//entrada de dados
	cout<<"Matricula: ";
	cin>>aluno.nmat;
	cout<<"Nota 1: ";
	cin>>aluno.np1;
	cout<<"Nota 2: ";
	cin>>aluno.np2;
	
	//calculo da média
	aluno.md=(aluno.np1+aluno.np2)/2;
	
	//testa a condição do aluno
	if(aluno.md>=60)
		strcpy(aluno.cond, "Aprovado");
	else 
		strcpy(aluno.cond, "Reprovado")
	
	//saida de dados
	cout<<endl<<"Média final: "<<aluno.md<<endl;
	cout<<"Situação: "<<aluno.cond<<endl;
	
	return 0;
	
}