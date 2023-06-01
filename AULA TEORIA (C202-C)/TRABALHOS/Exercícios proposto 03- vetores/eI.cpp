#include <iostream>
#include <locale>

using namespace std;
 
int main()
{
	setlocale (LC_ALL, "Portuguese");
	//declara��o de vari�veis
	int i, zero;
	double X[5];
	
	zero=0;  //vari�vel respons�vel po dizer se h� zero ou n�o
	
	//entrada de dados
	for(i=0; i<5; i++){
		cin>>X[i];
		if (X[i]==0)  //condi��o para o n�mero ser zero
			zero++;
	}
	
	//saida de dados
	if(zero==0)  /*caso a vari�vel zero continue com o valor 0,
				 indica que o vetor n�o tem zero*/
			cout<<endl<<"Nenhum elemento zero no vetor"<<endl;
	else{
		cout<<"Posi��es: ";
		
		for(i=0; i<5; i++){
			if(X[i]==0)
				cout<<i<<"  ";  //mostrar as posi��es quem tem zero
		}
		
		cout<<endl;  //final de linha
	}
	
	return 0;
	
} 