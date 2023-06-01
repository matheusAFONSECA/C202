#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	//declaração de variáveis
	float matriz[50][50], maior_principal, maior_secundaria, menor_principal, menor_secundaria;;
	int nLinhas, nColunas, i, j;
	
	do{  //entrada da ordem da matriz
		cout<<"Ordem da matriz (2 até 50): ";
		cin>>nLinhas;
	}while(nLinhas<2 || nLinhas >50);
	
	nColunas = nLinhas;   //atribuição do n° de colunas
	
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
		
	for(i=0; i<nLinhas; i++)  //analise da diagonal principal
		for(j=0; j<nColunas; j++){
			if (i==j){  //condição para um elemento estar na diagonal principal
				if(i==0)
					maior_principal=matriz[i][j];  //parâmetro do elemento maior da diagonal principal
				else if(maior_principal<matriz[i][j])
					maior_principal=matriz[i][j];  //redefinição do maior elemento da diagonal principal
				if(i==0)
					menor_principal=matriz[i][j];  //parâmetro do elemento menor da diagonal principal
				else if(menor_principal>matriz[i][j])
					menor_principal=matriz[i][j];  //redefinição do maior elemento da diagonal principal
			}
		}
	cout<<endl<<"DIAGONAL PRINCIPAL - MAIOR:"<<maior_principal<<"\t"<<"MENOR:"<<menor_principal;
	
	for(i=0; i<nLinhas; i++)
			for(j=0; j<nColunas; j++){
				if (i+j==nLinhas-1){//condição para um elementos estar na diagonal secundária
				if(i==0)
					maior_secundaria=matriz[i][j];  //parâmetro do elemento maior da diagonal secundaria
				else if(maior_secundaria<matriz[i][j])
					maior_secundaria=matriz[i][j];  //redefinição do maior elemento da diagonal secundária
				if(i==0)
					menor_secundaria=matriz[i][j];  //parâmetro do elemento menor da diagonal secundária
				else if(menor_secundaria>matriz[i][j])
					menor_secundaria=matriz[i][j];  //redefinição do maior elemento da diagonal secundária	
				}
			}
    cout<<endl<<"DIAGONAL SECUNDÁRIA - MAIOR:"<<maior_secundaria<<"\t"<<"MENOR:"<<menor_secundaria<<endl;
			
	return 0;
}