#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int fator(int e){  //fun��o auxiliar
	int fat=1;  //respons�vel pelo fatorial
	for(int i=2; i<=e; i++){
		fat = fat*i;  //calculo da fatorial
	}
	return fat;
}

double soma(double x, int N){  //fun��o auxiliar
	double resultado=1;  //vari�vel que guardar� o resultado do cosseno
	int sinal=-1, e=2;
	
	for(int i=1; i <N; i++){
		resultado = resultado + pow(x,2)/fator(e)*sinal;  //calculo do cosseno
		e = e + 2;  //controlador de exponencial
		sinal = sinal*(-1);  //mudan�a do sinal do proximo termo 
	}
	
	return resultado;
}

int main(){
	setlocale(LC_ALL, "Portuguese");  //habilita o idioma potugu�s
	//declara��o de vari�veis 
	double x;
	int N;
	
	do{  //entrada da quantidade de termos
		cout<<"N�mero de termos (>=1 e <=20): ";
		cin>>N;
	}while(N<1 || N>20);
	
	//entrada do valor de x
	cout<<"Valor de x: ";
	cin>>x;
	
	//saida de dados
	cout<<"cos(x) = "<<soma(x, N)<<endl;  //chamada da fun��o secund�ria
	
	return 0;
}