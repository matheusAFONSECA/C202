#include <iostream>
#include <locale>

using namespace std;
 
int main()
{
	setlocale (LC_ALL, "Portuguese");
	//declara��o de vari�veis
	int N, i, saida;
	double A[i], X;
	
	saida=0;  //dir� se existe no vetor o valor de X
	
	//entrada do conjunto
	cout<<"Declare a quantidade do conjunto do vetor: ";
	cin>>N;
	while(N<=0 || N>10){
		cout<<"Valor do conjunto inv�lido, declare outro valor: ";
		cin>>N;
	}
	
	//entrada dos dados do vetor
	cout<<"Entre com os n�meros do vetor: ";
	for(i=0; i<N; i++){
		cin>>A[i];
	}
	
	//entrada do n�mero que ser� analisado
	cout<<"Qual o valor de X? ";
	cin>>X;
	
	//analise dos dados
	for(i=0; i<N; i++){
		if(A[i]==X)  //quer dizer que o vetor tem um valor igual a X
			saida++;
	}
	
	//saida de dados
	if(saida==0)
		cout<<endl<<"Valor n�o pertence ao vetor"<<endl;
	else
		cout<<endl<<"Valor pertence ao vetor"<<endl;
	
	return 0;
	
} 