#include <iostream>
#include <cstring>

using namespace std;

struct ficha{  //declara��o da struct
	double N, CPF, idade, filhos, soma_filhos;
	double salario;
	//vari�veis da pessoa mais velha
	int idade_mais_velho, CPF_velho, filhos_velho;
	double salario_velho;
	//vari�veis da pessoa com o maior n� de filhos
	int idade_filho, CPF_filho, filhos_filho;
	char nome_filho;
	double salario_filho;
};

int main(){
	setlocale(LC_ALL,"Portuguese");
	//declara��o de vari�veis
	ficha x;
	char nome[200];
	char nome_velho[200];
	char nome_filho[200];
	
	x.soma_filhos = 0;
	
	do{  //entrada de habitantes
		cin>>x.N;
	}while(x.N<0);  //critica para que os habitantes n�o serem negativos
	
	for(int i=0; i<x.N; i++){
		cin.ignore();
		cin.getline(nome, 200);  //entrada do nome
		
		cin>>x.CPF;  //entrada do CPF
		
		do{
			cin>>x.salario;  //entrada do salario
		}while(x.salario<0);
		
		do{
			cin>>x.idade;  //entrada da idade
		}while(x.idade<0);
		
		do{
			cin>>x.filhos;  //entrada do n� dos filhos
		}while(x.filhos<0);
		
		x.soma_filhos = x.soma_filhos + x.filhos;  //soma dos n�meros de filhos
		
		if(i==0){  //determina��o de um par�metro para mais velho
			x.idade_mais_velho = x.idade;
			strcpy(nome_velho, nome);
			x.CPF_velho = x.CPF;
			x.salario_velho = x.salario;
			x.filhos_velho = x.filhos;
		}
		else if(x.idade_mais_velho<x.idade){  //condi��o para determinar os mais velho
			x.idade_mais_velho = x.idade;
			strcpy(nome_velho, nome);
			x.CPF_velho = x.CPF;
			x.salario_velho = x.salario;
			x.filhos_velho = x.filhos;
		}
		
		if(i==0){  //determina��o de um par�metro para o maior n� de filhos
			x.idade_filho = x.idade;
			strcpy(nome_filho,nome);
			x.CPF_filho = x.CPF;
			x.salario_filho = x.salario;
			x.filhos_filho = x.filhos;
		}
		else if(x.filhos_filho < x.filhos){  //condi��o para determinar o maior n� de filhos
			x.idade_filho = x.idade;
			strcpy(nome_filho,nome);
			x.CPF_filho = x.CPF;
			x.salario_filho = x.salario;
			x.filhos_filho = x.filhos;
		}
		
		}
	
	//saida da m�dia do n� de filhos
	cout<<endl<<"M�dia do n�mero de filhos: "<<x.soma_filhos/x.N<<endl;
	
	//saida de dados da pessoa mais velha
	cout<<"Dados da pessoa mais velha:"<<endl;
	cout<<"\t"<<"NOME: "<<nome_velho<<endl;
	cout<<"\t"<<"CPF: "<<x.CPF_velho<<endl;
	cout<<"\t"<<"IDADE: "<<x.idade_mais_velho<<endl;
	cout<<"\t"<<"SALARIO: "<<x.salario_velho<<endl;
	cout<<"\t"<<"N� DE FILHOS: "<<x.filhos_velho<<endl;
	
	//saida de dados da pessoa com o maior n� de filhos
	cout<<"Dados da pessoa com o maior n�mero de filhos:"<<endl;
	cout<<"\t"<<"NOME: "<<nome_filho<<endl;
	cout<<"\t"<<"CPF: "<<x.CPF_filho<<endl;
	cout<<"\t"<<"IDADE: "<<x.idade_filho<<endl;
	cout<<"\t"<<"SALARIO: "<<x.salario_filho<<endl;
	cout<<"\t"<<"N� DE FILHOS: "<<x.filhos_filho<<endl;
	
	return 0;
}