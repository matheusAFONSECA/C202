#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	//declaração de variáveis
	double N, contagem=0;
	double X, vetor[100], soma=0;
	
	do{  //entrada da quantidade de termos 
		cin>>N;
	}while(N<0 || N>100);
	
	for(int i=0; i<N; i++){
		cin>>vetor[i];  //entrada dos termos
		soma = soma + vetor[i];
	}
	
	cin>>X;  //entrada do termo que será analisado
	
	for(int i=0; i<N; i++){  //análise de quantas vezes irá aparecer o X
		if (X==vetor[i])
			contagem++;
	}
	
	//saida de dados
	cout<<endl<<"Média dos elementos: "<<soma/N<<endl;
	cout<<"Foram "<<contagem<<" veze(s) - "<<(contagem/N)*100<<"% - que o "<<X<<" apareceu entres os elementos"<<endl;
			
	return 0;
}