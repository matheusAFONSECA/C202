#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	//declara��o de vari�veis
	double matriz[10][10];
	int nLinhas, nColunas, i, j, soma=0, soma1=0, soma2=0;
	
	do{  //entrada da ordem da matriz
		cout<<"Ordem da matriz (1 at� 10): ";
		cin>>nLinhas;
	}while(nLinhas<0 || nLinhas >10);
	
	nColunas = nLinhas;   //atribui��o do n� de colunas
	
	//entrada dos elementos da matriz
	cout<<"Elementos da matriz: ";
	for(i=0; i<nLinhas; i++)
		for(j=0; j<nColunas; j++){
			cin>>matriz[i][j];
		}
	//saida de dados
	cout<<endl<<"Matriz: ";
		for(i=0; i<nLinhas; i++){  //saida dos elementos da matriz 
			cout<<endl;
			for(j=0; j<nColunas; j++)
				cout<<"\t"<<matriz[i][j]<<"\t";
		}
		
	for(i=0; i<nLinhas; i++)
		for(j=0; j<nColunas; j++){
			if (i==j)  //condi��o para um elemento estar na diagonal principal
				soma = soma + matriz[i][j];  //guaradar� a soma dos elementos da diagonal principal
		}
	cout<<endl<<"Soma de elementos da diagonal principal: "<<soma;
	
	for(i=0; i<nLinhas; i++)
			for(j=0; j<nColunas; j++){
				if (i<j)//condi��o para um elementos estar acima da diagonal principal
				soma1= soma1 + matriz[i][j];  //guardar� a soma dos elementos acima da diagonal principal
			}
    cout<<endl<<"Soma dos elementos acima da diagonal principal: "<<soma1;
    
    for(i=0; i<nLinhas; i++)
			for(j=0; j<nColunas; j++){
				if (i>j)//condi��o para um elementos estar acima da diagonal principal
				soma2= soma2 + matriz[i][j];  //guardar� a soma dos elementos acima da diagonal principal
			}
    cout<<endl<<"Soma dos elementos abaixo da diagonal principal: "<<soma2;
			
	return 0;
}