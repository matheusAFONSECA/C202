#include <iostream>
#include <locale>

using namespace std;
 
int main()
{
	setlocale (LC_ALL, "Portuguese");
	//declaração de variáveis
	int N, i, saida;
	double A[i], X;
	
	saida=0;  //dirá se existe no vetor o valor de X
	
	//entrada do conjunto
	cout<<"Declare a quantidade do conjunto do vetor: ";
	cin>>N;
	while(N<=0 || N>10){
		cout<<"Valor do conjunto inválido, declare outro valor: ";
		cin>>N;
	}
	
	//entrada dos dados do vetor
	cout<<"Entre com os números do vetor: ";
	for(i=0; i<N; i++){
		cin>>A[i];
	}
	
	//entrada do número que será analisado
	cout<<"Qual o valor de X? ";
	cin>>X;
	
	//analise dos dados
	for(i=0; i<N; i++){
		if(A[i]==X)  //quer dizer que o vetor tem um valor igual a X
			saida++;
	}
	
	//saida de dados
	if(saida==0)
		cout<<endl<<"Valor não pertence ao vetor"<<endl;
	else
		cout<<endl<<"Valor pertence ao vetor"<<endl;
	
	return 0;
	
} 