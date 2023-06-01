#include <iostream>
#include <cstring>

using namespace std;

struct dados{  //declaração de campos
	char nome[80];
	char cpf[11], cpf1[11];
	int idade, participante, retorno;
};

int main(){
	setlocale(LC_ALL, "Portuguese");
	//declaração de variáveis
	dados x[203];
	
	do{
		cout<<"Declare a quantidade de participantes: ";
		cin>>x[201].participante;  //entrada da quantidade de participantes
		cin.ignore();
	}while(x[201].participante<0 || x[201].participante>200);  //critica da quantidade de corredores
	
	for(int i=0; i<x[201].participante; i++){  //entrada de dados
		cout<<"Entre com os dados do "<<i+1<<"° corredor:"<<endl;
		cout<<"Nome: ";
		cin.getline(x[i].nome, 80);  //entrada do nome do corredor
		
		cout<<"CPF: ";
		cin.getline(x[i].cpf, 11);  //entrada do cpf do corredor
		
		do{
			cout<<"Idade: ";
			cin>>x[i].idade;  //entrada da idade do corredor
			cin.ignore();
		}while(x[i].idade<10 || x[i].idade>80);  //critica da idade do corredor
	}
	
	cout<<endl<<"Declare o CPF do corredor que se deseja os dados: ";
	cin.getline(x[202].cpf1, 11);  //cpf do corredor que se deseja os dados
	
	for(int i=0; i<x[201].participante; i++){  //saida de dados
		x[203].retorno = strcmp(x[202].cpf1, x[i].cpf);  //comparação de strings
		
		if(x[203].retorno==0){  //condição de igualdade
			cout<<endl<<"Nome: "<<x[i].nome<<endl;
			cout<<"Idade: "<<x[i].idade<<endl;
		}
	}
	
	return 0;
	
}