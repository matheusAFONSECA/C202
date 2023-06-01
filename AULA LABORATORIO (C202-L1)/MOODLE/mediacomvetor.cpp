#include <iostream>
#include <iomanip>

using namespace std;
 
int main()
{
	//declaração de variáveis
	int i;
	double X[1000], soma, media, N;
	
	soma=0;  //variável que guardará a soma dos números do vetor
	
	//entrada de dados
	cin>>N;  //entrada do conjunto do vetor
	for(i=0; i<N; i++){
		cin>>X[i];  //entrada dos números do vetor
		soma=soma+X[i];
	}
	
	//calculo da media
	media = soma/N;
	
	//saida de dados
	cout<<"Media: "<<media<<endl;
	cout<<"Miores que a media: ";
		for(i=0; i<N; i++){
			if(X[i]>media)  //condição para um n° do vetor ser maior que a média
				cout<<X[i]<<" ";  //mostrará os números maior que a média
		}
	cout<<endl;  //final de linha 
		
	return 0;
	
}