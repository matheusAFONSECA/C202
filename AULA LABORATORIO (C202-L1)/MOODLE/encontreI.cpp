#include <iostream>
#include <iomanip>

using namespace std;
 
int main()
{
	//declaração de variáveis
	int i, saida;
	double A[10000], X, N;
	
	saida=0;  //dirá se existe no vetor o valor de X
	
	//entrada do conjunto
	cin>>N;
	
	//entrada dos dados do vetor
	for(i=0; i<N; i++){
		cin>>A[i];
	}
	
	//entrada do número que será analisado
	cin>>X;
	
	//analise dos dados
	for(i=0; i<N; i++){
		if(A[i]==X)  //quer dizer que o vetor tem um valor igual a X
			saida++;
	}
	
	//saida de dados
	cout<<fixed<<setprecision(2);
	cout<<(saida/N)*100<<endl;
	
	return 0;
	
} 