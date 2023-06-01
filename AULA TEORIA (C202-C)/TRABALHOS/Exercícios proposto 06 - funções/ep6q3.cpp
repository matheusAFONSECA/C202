#include <iostream>
#include <locale>

using namespace std;

double analise( double numero, int i){  //fun��o auxiliar
	double maior_numero;
	if (i==0){
		maior_numero=numero;  //defini��o do maior n�mero
	}
	else if (numero>maior_numero){  //condi��o para redefinir o maior n�mero
		maior_numero=numero;  //redifini��o do maior n�mero
	}
	
	return maior_numero;
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	//declara��o de vari�veis 
	double vet[6], maior;
	int elementos;
	
	do{  //entrada da quantidade de elementos
		cout<<"Quantos elementos (1-5): ";
		cin>>elementos;
	}while(elementos<1 || elementos>5);  //delimita��o da entrada de elementos
	
	//entrad dos elementos
	cout<<"Digite os "<<elementos<<" n�meros: ";
	for(int i=0; i<elementos; i++){
		cin>>vet[i];
		maior = analise(vet[i], i);  //chamada da fun��o auxiliar
	}
	
	//saida de dados
	cout<<"Maior elemento: "<<maior<<endl;
	
	return 0;
}