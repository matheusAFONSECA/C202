#include <iostream>

using namespace std;

int FAT(int N){  //função secundária
	int soma=1;
	for(int i=1; i<=N; i++){  //calculo de fatorial
		soma=soma*i;
	}
	return soma;
}

int COMBINA(int M, int P){  //função auxiliar
	int F, F1, F2;
	F=FAT(M);  //calculo do fatorial de M
	F1=FAT(P);  //calculo do fatorial de P
	F2= FAT(M-P);  //calculo do fatorial da diferença de P e M
	
	return (F/(F2*F1));  //retorno do calculo da análise combinatória
}

int main(){
	//declaração de variáveis
	int M, P, C;
	
	//etrada de dados
	do{
		cout<<"Entre com o valor de M: ";
		cin>>M;
	}while(M<0);
	do{
		cout<<"Entre com o valor de P: ";
		cin>>P;
	}while(P<0);
	
	//saida de dados
	if(M<P){
		C=0;
		cout<<endl<<"C = "<<C<<endl;
	}
	else{
		C=COMBINA(M, P); //chamada da função auxiliar
		cout<<endl<<"C = "<<C<<endl; 	
	}
	
	return 0;
}