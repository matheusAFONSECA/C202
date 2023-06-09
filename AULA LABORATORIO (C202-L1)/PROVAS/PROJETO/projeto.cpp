#include <iostream>
#include <fstream>

using namespace std;

void tempo_saida(int contagem){  //fun��o que controla a quantidade de saida de tra�os
	for(int m=0; m<contagem; m++){
		cout<<"-";
	}
	
	return;
}

int main(){
	setlocale(LC_ALL,"Portuguese");  //permite o uso do portugu�s
	//declara��o de vari�veis
	ifstream arquivo;  //vari�vel do arquivo
	int processo[100], tempo[100], prioridade[100];
	int matriz[100][100];
	int elemento[100];  //respons�vel por pegar os elementos do arquivo
	int total=0;  //determina a quantidade total de linhas de elementos do arquivo
	int i, j, m, k=0;
	int controle=0, crescente=1;  /*controle � respons�vel por fazer o controle da quantidade de processos
									crescente � respon�vel por determinar a prioridade de sa�da*/
	float soma=0;
	int espera[100], espera_anterior;  /*espera � respons�vel por guardar o tempo de espera de um processo
										espera_anterior � respons�vel por auxiliar na soma do tempo de espera de um processo*/
	
	arquivo.open("prioridade.txt" , ifstream::in);  //abertura do arquivo
	
	while(!arquivo.eof()){  //leitura de dados do arquivo at� o fim;
		arquivo>>elemento[k];  //entrada dos elementos
		k++;  //incremento no contador do vetor
		
		if(k%3==0)  //condi��o para pular a linha e aumentar a quantidade de linhas
			total++;  //incrementa a quantidade de linhas
	}
		
	k=0;  //zerando novamente o k
		
	for(i=0; i<total; i++){
		for(j=0; j<3; j++){
			matriz[i][j]=elemento[k];  //leitura da posi��o na matriz
			k++;  //incremento no contador do vetor
		}
		processo[i]=matriz[i][0];  //entrada de dados da matriz no vetor
		tempo[i]=matriz[i][1];  //entrada de dados da matriz no vetor
		prioridade[i]=matriz[i][2];  //entrada de dados da matriz no vetor
		
		controle++;  //respons�vel pela contagem da quantidade de processos
	}
	
	//organiza��o da ordem segundo a prioridade
	for(int p=0; p<controle; p++){  //controle da quantidade de processos analisados
		for(i=0; i<controle; i++){  //an�lise das prioridades dos processos
		m=0;
		if(prioridade[i]==crescente)
				m++;  //vari�vel para o controle do while
		while(m==1){
			cout<<"P"<<processo[i];
			tempo_saida(tempo[i]);  //chamando a fun��o
			
			if(prioridade[i]==1){   //critica para a primeira prioridade
				espera[i] = tempo[i];  //tempo de espera
				espera_anterior = espera[i];  //auxiliar na soma do tempo de espera da proxima prioridade
			}
			else if(prioridade[i]==controle){  //critica para a �ltima prioridade
				espera[i]=0;  //a �ltima prioridade n�o interfere no tempo de espera m�dio
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