#include <iostream>

using namespace std;

int FAT(int N){  //fun��o secund�ria
	int soma=1;
	for(int i=1; i<=N; i++){  //calculo de fatorial
		soma=soma*i;
	}
	return soma;
}

int main(){
	//declara��o de vari�veis
	int N;
	
	//entrada de dados
	do{
		cout<<"Declare o valor que se deseja o vetorial: ";
		cin>>N;	
	}while(N<0);
	
	//saida de dados
	cout<<endl<<"FATORIAL: "<<FAT(N)<<endl;  //chamada da fun��o secund�ria e saida de dados
	
	return 0;
}