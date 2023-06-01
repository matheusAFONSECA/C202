#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int fatorial(int e){  //função auxiliar
	int fat=1;  //responsável pelo fatorial
	for(int m=2; m<=e; m++){
		fat = fat*m;  //calculo da fatorial
	}
	return fat;
}

double SX(double X, int N){  //função auxiliar
	double soma=1;  //variável que guardará o resultado do cosseno
	int j=-1, e=2;
	
	for(int i=1; i<N; i++){
		soma = soma + pow(X,e)/fatorial(e)*j;  //calculo do cosseno
		e = e + 2;  //controlador de fatorial
		j = j*(-1);  //mudança do sinal do proximo termo 
	}
	
	return soma;
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	//declaração de veriáveis
	double X;
	int N;
	
	//entrada de dados
	cout<<"Declare o valor do X: ";
	cin>>X;  //entrada do valor de X
	
	do{
		cout<<"Declare a quantidade de termos (1 até 20):";
		cin>>N;  //entrada da quantidade de termos
	}while(N<1 || N>20);
	
	//saida de dados e chamada de função auxiliar
	cout<<fixed<<setprecision(3);
	cout<<endl<<"f(x): "<<SX(X,N)<<endl;	
	
	return 0;
	
}