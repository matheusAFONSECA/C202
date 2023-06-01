#include <iostream>
#include <cstring>

using namespace std;

struct dados{  //declaração de campos
	int equipe;
	char nome[30];
	double nf, acerto, erro, tempo, maior;
};

int main(){
	setlocale(LC_ALL, "Portuguese");
	//declaração de variáveis
	dados x[12];
	
	do{  //entrada da quantidade de equipes
		cout<<"Declare a quantidade de participantes: ";
		cin>>x[11].equipe;
		cin.ignore();
	}while(x[11].equipe<0 || x[11].equipe>10);
	
	for(int i=0; i<x[11].equipe; i++){  //entrada de dados
		cout<<"Entre com os dados da "<<i+1<<"° equipe:"<<endl;
		cout<<"Nome: ";
		cin.getline(x[i].nome, 30);  //entrada do nome
		
		do{
			cout<<"Acerto(s): ";
			cin>>x[i].acerto;  //entrada de acertos
		}while(x[i].acerto<0 || x[i].acerto>8);
		
		do{
			cout<<"Erro(s): ";
			cin>>x[i].erro;  //entrada de erros
		}while(x[i].erro<0 || x[i].erro>8);
		
		do{
			cout<<"Tempo, em minutos: ";
			cin>>x[i].tempo;  //entrada de tempo
		}while(x[i].tempo<0);
		
		x[i].nf = (5*x[i].acerto - 2*x[i].erro +1)/x[i].tempo;  //calculo de nota final 
		
		if(i==0){  //parâmetro de maior nota final
			x[12].maior=x[i].nf;
		}
		else{
			if(x[i].nf>x[12].maior){  //condição para redefinir a maior nota  final
				x[i].nf=x[12].maior;
			}
		}
		cin.ignore();
	}
	
	cout<<endl<<"Equipe(s) vencedor(as): ";
	for(int i=0; i<x[11].equipe; i++){  //saida de dados
		if(x[i].nf==x[12].maior){
			cout<<x[i].nome<<";  ";
		}
	}
	cout<<endl;  //final de linha
	
	return 0;
	
}