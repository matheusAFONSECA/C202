#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	//declara��o de vari�veis
	double matriz[10][10];
	int nLinhas, nColunas, i, j, soma, menosum;
	
	do{  //entrada da ordem da matriz
		cout<<"Ordem da matriz (1 at� 10): ";
		cin>>nLinhas;
	}while(nLinhas<0 || nLinhas >10);
	
	nColunas = nLinhas;   //atribui��o do n� de colunas
	
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
				if (i==j)  //condi��o para um elemento estar na diagonal principal
				cout<<matriz[i][j]<<"  ";
			}
	
	cout<<endl<<"Elementos da diagonal secund�ria: ";	
		for(i=0; i<nLinhas; i++){
			menosum=nLinhas-1;  //defini��o da ordem menos um, � necess�ria para conseguir definir a diagonal secund�ria
			for(j=0; j<nColunas; j++){
				soma=i+j;  //soma dos do n� da linha e n� da coluna de um elemento
				if (soma==menosum)  //condi��o para um elemento estar na diagonal secund�ria
				cout<<matriz[i][j]"  ";
			}
		}
			
	return 0;
}