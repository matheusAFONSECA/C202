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
	//declara��o de variavel aluno, do tipo ficha
	ficha aluno[5];
	
	for(int i=0; i<5; i++){
	//entrada de dados
	cout<<"Matricula: ";
	cin>>aluno[i].nmat;
	cout<<"Nota 1: ";
	cin>>aluno[i].np1;
	cout<<"Nota 2: ";
	cin>>aluno[i].np2;
	
	//calculo da m�dia
	aluno[i].md=(aluno[i].np1+aluno[i].np2)/2;
	}
	
	//saida de dados
	cout<<"Aprovados: ";
	for(int i=0; i<5; i++){
		if(aluno[i].md>=60){
			cout<<aluno[i].nmat<<",	";
		}
	}
	
	cout<<endl;
	
	return 0;
	
}