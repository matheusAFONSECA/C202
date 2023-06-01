#include <iostream>
#include <locale>

using namespace std;
 
int main()
{
	setlocale (LC_ALL, "Portuguese");
	//declaração de variáveis
	int i, zero;
	double X[5];
	
	zero=0;  //variável responsável po dizer se há zero ou não
	
	//entrada de dados
	for(i=0; i<5; i++){
		cin>>X[i];
		if (X[i]==0)  //condição para o número ser zero
			zero++;
	}
	
	//saida de dados
	if(zero==0)  /*caso a variável zero continue com o valor 0,
				 indica que o vetor não tem zero*/
			cout<<endl<<"Nenhum elemento zero no vetor"<<endl;
	else{
		cout<<"Posições: ";
		
		for(i=0; i<5; i++){
			if(X[i]==0)
				cout<<i<<"  ";  //mostrar as posições quem tem zero
		}
		
		cout<<endl;  //final de linha
	}
	
	return 0;
	
} 