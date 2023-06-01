#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	//declara��o de vari�veis
	int vetor[200], soma=0;
	int j=0, i=0; 
	double negativo=0, par=0, impar=0, positivo=0;
	
	//entrada dos elementos do vetor
	do{
		cin>>vetor[i];
		
		if(vetor[i]!=0)  //condi��o para haver a soma dos elementos do vetor
			soma = soma+vetor[i];

		i++;  //incremento da posi��o do vetor
	}while(vetor[i]!=0);  //condi��o para para de ler o vetor
	
	j=i;  //vari�vel controle do for
	
	//an�lise dos elementos
	for(i=0; i<j; i++){
		if(vetor[i]<0)
			negativo++;  //incrementa o n�mero de elementos negativos
		else
			positivo++;  //incrementa o n�mero de elementos positivos
		if(vetor[i]%2==0)
			par++;  //incrementa o n�mero de elementos pares
		else 
			impar++;  //incrementa o n�mero de elementos impares
	}
	
	//saida de dados
	cout<<fixed<<setprecision(2);
	cout<<"Ha "<<(par/j)*100<<"% de numeros pares"<<endl;
	cout<<"Ha "<<(impar/j)*100<<"% de numeros impares"<<endl;
	cout<<"Ha "<<(positivo/j)*100<<"% de numeros positivos"<<endl;
	cout<<"Ha "<<(negativo/j)*100<<"% de numeros negativos"<<endl;
	
	return 0;
	
}