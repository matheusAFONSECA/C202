#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	//declaração de variáveis
	double X[5], soma, media;
	int maiores, menores, iguais;
	
	soma=0;  //variável que guardará a soma dos termos
	menores=0;  //variável que guardará a quantidade de n° menores que a média
	maiores=0;  //variável que guardará a quantidade de n° maiores que a média
	iguais=0;  //variável que guardará a quantidade de n° iguais que a média
	
	//entrada dos dados
	for(int i=0; i<5; i++){
		cin>>X[i];  //entrada dos números
		soma= soma+X[i];  //soma dos termos
	}
	
	media=soma/5;  //definição da média dos termos inseridos
	
	//analise de dados
	for(int i=0; i<5; i++){
		if(X[i]>media){
			maiores++;  //incrementa a quantidade de n° maiores que a media
		}
		else if(X[i]==media){
			iguais++;  //incrementa a quantidade de n° iguais que a media
		}
		else if(X[i]<media){
			menores++;  //incrementa a quantidade de n° menores que a media
		}
	}
	
	//saida de dados
	cout<<endl<<"Média: "<<media<<endl;
	cout<<"Números maiores que a média: "<<maiores<<endl;
	cout<<"Números iguais a média: "<<iguais<<endl;
	cout<<"Números menores que a média: "<<menores<<endl;
	
	return 0;
	
}