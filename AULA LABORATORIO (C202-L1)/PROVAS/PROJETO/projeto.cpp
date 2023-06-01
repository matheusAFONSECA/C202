#include <iostream>
#include <fstream>

using namespace std;

void tempo_saida(int contagem){  //função que controla a quantidade de saida de traços
	for(int m=0; m<contagem; m++){
		cout<<"-";
	}
	
	return;
}

int main(){
	setlocale(LC_ALL,"Portuguese");  //permite o uso do português
	//declaração de variáveis
	ifstream arquivo;  //variável do arquivo
	int processo[100], tempo[100], prioridade[100];
	int matriz[100][100];
	int elemento[100];  //responsável por pegar os elementos do arquivo
	int total=0;  //determina a quantidade total de linhas de elementos do arquivo
	int i, j, m, k=0;
	int controle=0, crescente=1;  /*controle é responsável por fazer o controle da quantidade de processos
									crescente é responável por determinar a prioridade de saída*/
	float soma=0;
	int espera[100], espera_anterior;  /*espera é responsável por guardar o tempo de espera de um processo
										espera_anterior é responsável por auxiliar na soma do tempo de espera de um processo*/
	
	arquivo.open("prioridade.txt" , ifstream::in);  //abertura do arquivo
	
	while(!arquivo.eof()){  //leitura de dados do arquivo até o fim;
		arquivo>>elemento[k];  //entrada dos elementos
		k++;  //incremento no contador do vetor
		
		if(k%3==0)  //condição para pular a linha e aumentar a quantidade de linhas
			total++;  //incrementa a quantidade de linhas
	}
		
	k=0;  //zerando novamente o k
		
	for(i=0; i<total; i++){
		for(j=0; j<3; j++){
			matriz[i][j]=elemento[k];  //leitura da posição na matriz
			k++;  //incremento no contador do vetor
		}
		processo[i]=matriz[i][0];  //entrada de dados da matriz no vetor
		tempo[i]=matriz[i][1];  //entrada de dados da matriz no vetor
		prioridade[i]=matriz[i][2];  //entrada de dados da matriz no vetor
		
		controle++;  //responsável pela contagem da quantidade de processos
	}
	
	//organização da ordem segundo a prioridade
	for(int p=0; p<controle; p++){  //controle da quantidade de processos analisados
		for(i=0; i<controle; i++){  //análise das prioridades dos processos
		m=0;
		if(prioridade[i]==crescente)
				m++;  //variável para o controle do while
		while(m==1){
			cout<<"P"<<processo[i];
			tempo_saida(tempo[i]);  //chamando a função
			
			if(prioridade[i]==1){   //critica para a primeira prioridade
				espera[i] = tempo[i];  //tempo de espera
				espera_anterior = espera[i];  //auxiliar na soma do tempo de espera da proxima prioridade
			}
			else if(prioridade[i]==controle){  //critica para a última prioridade
				espera[i]=0;  //a última prioridade não interfere no tempo de espera médio
			}
			else{
				espera[i] = espera_anterior+tempo[i];
				espera_anterior = espera[i];
			}
				
			m=0;
			crescente++;  //controlde das prioridades
		}
	}
	}
		
	for(i=0; i<controle; i++){  //soma dos tempos de espera
		soma = soma + espera[i];
	}
	
	cout<<endl<<"Tempo medio de espera: "<<soma/controle<<"ms"<<endl;
	
	arquivo.close();  //fecha o arquivo
	
	return 0;
}