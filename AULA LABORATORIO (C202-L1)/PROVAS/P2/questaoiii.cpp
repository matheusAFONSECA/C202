#include <iostream>

using namespace std;

void pontuacao(int soma1, int &maior, int &indice){  //fun��o auxiliar da melhor carga
	if(indice==0){  //defini��o do par�metro de melhor carga
		indice++;
		maior=soma1;
	}
	else if(soma1>maior){  //redefini��o de melhor carga
		indice++;
		maior=soma1;
	}
	
	return;
}
void pontuacao1(int soma1, int &menor, int &indice){  //fun��o auxiliar da pior carga
	if(indice==0){  //defini��o do par�metro da pior carga
		indice++;
		menor=soma1;
	}
	else if(soma1<menor){  //redefini��o da pior carga
		indice++;
		menor=soma1;
	}
	
	return;
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	//declara��o de vari�veis
	int N, TE[100], CC[100], soma=0, soma1;
	int maior, indice, indice_pior, menor;
	
	do{  //entrada da quantidade de entregas
		cin>>N;
	}while(N<=0);
	
	for(int i=0; i<N; i++){
		cin>>TE[i];
		cin>>CC[i];  //entrada do tempo de enterga e condi��o da carga
		
		soma = soma + TE[i]+CC[i];  //soma de TE e CC de todas as cargas
		soma1=TE[i]+CC[i];
		indice=i;
		indice_pior=i;
		
		pontuacao(soma1, maior, indice);  //chamado da fun��o auxiliar para verificar o melhor
		
		pontuacao1(soma1, menor, indice_pior);  //chamado da fun��o axuliar para verificar o pior

	}
	
	//saida de dados
	cout<<"Pontuacao da entrega: "<<soma<<" pontos"<<endl;
	cout<<"Indice da melhor carga: "<<indice<<endl;
	cout<<"Melhor carga: "<<maior<<" pontos"<<endl;
	cout<<"Indice da pior carga: "<<indice_pior<<endl;
	cout<<"Pior carga: "<<menor<<" pontos"<<endl;
	
	
	return 0;
	
}