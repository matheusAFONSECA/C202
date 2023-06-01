#include <iostream>

using namespace std;
void converte(int &segundos, int &hora, int &min){  //função auxiliar
	int resto;
	
	hora = segundos/3600;  //calculo da hora
	resto = segundos-hora*3600;
	min = resto/60;  //calculo dos minutos
	segundos = resto-min*60;  //calculo de segundos
	
	return;
}

int main(){
	//declaração de variáveis 
	int segundos, hora, min;
	
	//entrada dos segundos
	cout<<"Quantidade em segundos: ";
	cin>>segundos;
	
	hora=segundos;
	min=segundos;
	
	//chamada da função auxiliar
	converte(segundos, hora, min);
	
	//saida de dados
	cout<<endl<<hora<<"h ";  //mostra a(s) hora(s)
	cout<<min<<"min ";  //mostra o(s) minuto(s)
	cout<<segundos<<"seg"<<endl;  //mostra o(s) segundo(s)
	
	return 0;
}