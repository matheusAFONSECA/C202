#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	//declaração de variáveis
	int vetor[200], soma=0;
	int j=0, i=0; 
	double negativo=0, par=0, impar=0, positivo=0;
	
	//entrada dos elementos do vetor
	do{
		cin>>vetor[i];
		
		if(vetor[i]!=0)  //condição para haver a soma dos elementos do vetor
			soma = soma+vetor[i];

		i++;  //incremento da posição do vetor
	}while(vetor[i]!=0);  //condição para para de ler o vetor
	
	j=i;  //variável controle do for
	
	//análise dos elementos
	for(i=0; i<j; i++){
		if(vetor[i]<0)
			negativo++;  //incrementa o número de elementos negativos
		else
			positivo++;  //incrementa o número de elementos positivos
		if(vetor[i]%2==0)
			par++;  //incrementa o número de elementos pares
		else 
			impar++;  //incrementa o número de elementos impares
	}
	
	//saida de dados
	cout<<fixed<<setprecision(2);
	cout<<"Ha "<<(par/j)*100<<"% de numeros pares"<<endl;
	cout<<"Ha "<<(impar/j)*100<<"% de numeros impares"<<endl;
	cout<<"Ha "<<(positivo/j)*100<<"% de numeros positivos"<<endl;
	cout<<"Ha "<<(negativo/j)*100<<"% de numeros negativos"<<endl;
	
	return 0;
	
}