#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	//declaração de variáveis
	double matriz[10][10];
	int nLinhas, nColunas, i, j, soma, menosum;
	
	do{  //entrada da ordem da matriz
		cout<<"Ordem da matriz (1 até 10): ";
		cin>>nLinhas;
	}while(nLinhas<0 || nLinhas >10);
	
	nColunas = nLinhas;   //atribuição do n° de colunas
	
	//entrada dos elementos da matriz
	cout<<"Elementos da matriz: ";
	for(i=0; i<nLinhas; i++)
		for(j=0; j<nColunas; j++)
			cin>>matriz[i][j];
	
	//saida de dados
	cout<<endl<<"Matriz: ";
		for(i=0; i<nLinhas; i++){  //saida dos elementos da matriz 
			cout<<endl;
			for(j=0; j<nColunas; j++)
				cout<<"\t"<<matriz[i][j]<<"\t";
		}
		
	cout<<endl<<"Elementos da diagonal principal: ";
		for(i=0; i<nLinhas; i++)
			for(j=0; j<nColunas; j++){
				if (i==j)  //condição para um elemento estar na diagonal principal
				cout<<matriz[i][j]<<"  ";
			}
	
	cout<<endl<<"Elementos da diagonal secundária: ";	
		for(i=0; i<nLinhas; i++){
			menosum=nLinhas-1;  //definição da ordem menos um, é necessária para conseguir definir a diagonal secundária
			for(j=0; j<nColunas; j++){
				soma=i+j;  //soma dos do n° da linha e n° da coluna de um elemento
				if (soma==menosum)  //condição para um elemento estar na diagonal secundária
				cout<<matriz[i][j]"  ";
			}
		}
			
	return 0;
}