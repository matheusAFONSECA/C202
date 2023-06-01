#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	//declara��o de vari�veis
	double X[5], soma, media;
	int maiores, menores, iguais;
	
	soma=0;  //vari�vel que guardar� a soma dos termos
	menores=0;  //vari�vel que guardar� a quantidade de n� menores que a m�dia
	maiores=0;  //vari�vel que guardar� a quantidade de n� maiores que a m�dia
	iguais=0;  //vari�vel que guardar� a quantidade de n� iguais que a m�dia
	
	//entrada dos dados
	for(int i=0; i<5; i++){
		cin>>X[i];  //entrada dos n�meros
		soma= soma+X[i];  //soma dos termos
	}
	
	media=soma/5;  //defini��o da m�dia dos termos inseridos
	
	//analise de dados
	for(int i=0; i<5; i++){
		if(X[i]>media){
			maiores++;  //incrementa a quantidade de n� maiores que a media
		}
		else if(X[i]==media){
			iguais++;  //incrementa a quantidade de n� iguais que a media
		}
		else if(X[i]<media){
			menores++;  //incrementa a quantidade de n� menores que a media
		}
	}
	
	//saida de dados
	cout<<endl<<"M�dia: "<<media<<endl;
	cout<<"N�meros maiores que a m�dia: "<<maiores<<endl;
	cout<<"N�meros iguais a m�dia: "<<iguais<<endl;
	cout<<"N�meros menores que a m�dia: "<<menores<<endl;
	
	return 0;
	
}