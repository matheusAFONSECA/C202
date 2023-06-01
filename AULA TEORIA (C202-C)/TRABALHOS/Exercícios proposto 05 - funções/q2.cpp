#include <iostream>

using namespace std;

int FAT(int N){  //função secundária
	int soma=1;
	for(int i=1; i<=N; i++){  //calculo de fatorial
		soma=soma*i;
	}
	return soma;
}

int main(){
	//declaração de variáveis
	int N;
	
	//entrada de dados
	do{
		cout<<"Declare o valor que se deseja o vetorial: ";
		cin>>N;	
	}while(N<0);
	
	//saida de dados
	cout<<endl<<"FATORIAL: "<<FAT(N)<<endl;  //chamada da função secundária e saida de dados
	
	return 0;
}