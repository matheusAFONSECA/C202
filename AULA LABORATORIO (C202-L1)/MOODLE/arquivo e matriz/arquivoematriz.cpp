#include <iostream>
#include <fstream>

using namespace std;

int main(){
	//declara��o de vari�veis
	int i, j, matrizC[5][5], matrizA[5][5], matrizB[5][5], linhaA, colunaA;
	ifstream arquivo;
	
	arquivo.open("matrizes.txt", ifstream::in);  //abertura do arquivo
 	
 	//entrada de dados
	 do{
 		arquivo>>linhaA;  //entrada do n� de linhas
 		colunaA=linhaA;  //defini��o de mesma linha e coluna - mtrizes quadradas
	 } while(linhaA<1 || linhaA>5);
	
	 for(i=0; i<linhaA; i++)
	 	for(j=0; j<colunaA; j++){
			 arquivo>>matrizA[i][j];  //defini��o da posi��o
		 }
		 
     for(i=0; i<linhaA; i++)
	 	for(j=0; j<colunaA; j++){
			 arquivo>>matrizB[i][j];  //defini��o da posi��o
		 }
	 //saida de dados
	 for(i=0; i<linhaA; i++){
	 	for(j=0; j<colunaA; j++){
			 cout<<matrizA[i][j]+matrizB[i][j]<<" ";
		 }
		 cout<<endl;  //pular de uma linha pra outra	 
	 }
	 
	 arquivo.close();  //fecha a utiliza��o do arquivo
	 		
     return 0;
}