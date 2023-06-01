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
	ficha aluno[5];
	double soma=0, media;
	
	for(int i=0; i<5; i++){
	//entrada de dados
	cout<<"Matricula: ";
	cin>>aluno[i].nmat;
	cout<<"Nota 1: ";
	cin>>aluno[i].np1;
	cout<<"Nota 2: ";
	cin>>aluno[i].np2;
	
	//calculo da média
	aluno[i].md=(aluno[i].np1+aluno[i].np2)/2;
	
	//calculo da soma da média da turma
	soma=soma+aluno[i].md;
	}
	
	//calculo da média da turma 
	media=soma/5;
	
	//saida de dados
	cout<<endl<<"Média da turma: "<<media<<endl;
	cout<<"Alunos com a média acima da média da turma: ";
	for(int i=0; i<5; i++){
		if(aluno[i].md>=media){
			cout<<aluno[i].nmat<<",	";
		}
	}
	
	cout<<endl;
	
	return 0;
	
}