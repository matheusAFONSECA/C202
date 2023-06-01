#include <iostream>
#include <locale>

using namespace std;

double analise( double numero, int i){  //função auxiliar
	double maior_numero;
	if (i==0){
		maior_numero=numero;  //definição do maior número
	}
	else if (numero>maior_numero){  //condição para redefinir o maior número
		maior_numero=numero;  //redifinição do maior número
	}
	
	return maior_numero;
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	//declaração de variáveis 
	double vet[6], maior;
	int elementos;
	
	do{  //entrada da quantidade de elementos
		cout<<"Quantos elementos (1-5): ";
		cin>>elementos;
	}while(elementos<1 || elementos>5);  //delimitação da entrada de elementos
	
	//entrad dos elementos
	cout<<"Digite os "<<elementos<<" números: ";
	for(int i=0; i<elementos; i++){
		cin>>vet[i];
		maior = analise(vet[i], i);  //chamada da função auxiliar
	}
	
	//saida de dados
	cout<<"Maior elemento: "<<maior<<endl;
	
	return 0;
}