#include <iostream>
#include <cstring>

using namespace std;
struct ficha{
	char nome[200];  //lerá o nome do personagem
	char profissao[200];  //lera a profissão do personagem
	int tamanho, constituicao, sanidade;  
	int vida;
};

int calculo(int tamanho1, int constituicao1){  //função auxiliar
	return (tamanho1 + constituicao1)/10; 
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	//declaração de variáveis
	int i=0, j, retorno, soma_vida=0, soma_sanidade=0;
	ficha x[100];
	
	cin.getline(x[i].nome,200);
	retorno=strcmp(x[i].nome, "SAIR");
	
	while(retorno!=0){  //entrada de dados
		
		cin.getline(x[i].profissao, 200);
		
		do{  //leitura do tamanho
			cin>>x[i].tamanho;
		}while(x[i].tamanho<0 || x[i].tamanho>100);
		do{  //leitura da constituição
			cin>>x[i].constituicao;
		}while(x[i].constituicao<0 || x[i].constituicao>100);
		do{  //leitura da sanidade
			cin>>x[i].sanidade;
		}while(x[i].sanidade<0 || x[i].sanidade>100);
		
		x[i].vida = calculo(x[i].tamanho, x[i].constituicao);
		
		soma_vida = soma_vida + x[i].vida;
		soma_sanidade = soma_sanidade + x[i].sanidade;
		
		i++;  //contagem de personagens e incremento
	
		cin.ignore();
		cin.getline(x[i].nome,200);
		retorno=strcmp(x[i].nome, "SAIR");
	}
	
	//saida de dados
	cout<<"Ha "<<i<<" personagens na mesa."<<endl;
	cout<<"A media dos pontos de vida dos"<<endl;
	cout<<"personagens eh de "<<soma_vida/i<<" e a media de pontos de sanidade e de "<<soma_sanidade/i<<endl;
	
	j=i;
	
	for(i=0; i<j; i++){
		cout<<endl<<"Nome: "<<x[i].nome<<endl;
		cout<<"Profissao: "<<x[i].profissao<<endl;
		cout<<"Pontos de vida: "<<x[i].vida<<endl;
		cout<<"Sanidade: "<<x[i].sanidade<<endl;
	}
		
	return 0;
	
}