#include <iostream>
#include <iomanip>

using namespace std;
 
int main()
{
	//declara��o de vari�veis
	int i;
	double X[1000], soma, media, N;
	
	soma=0;  //vari�vel que guardar� a soma dos n�meros do vetor
	
	//entrada de dados
	cin>>N;  //entrada do conjunto do vetor
	for(i=0; i<N; i++){
		cin>>X[i];  //entrada dos n�meros do vetor
		soma=soma+X[i];
	}
	
	//calculo da media
	media = soma/N;
	
	//saida de dados
	cout<<"Media: "<<media<<endl;
	cout<<"Miores que a media: ";
		for(i=0; i<N; i++){
			if(X[i]>media)  //condi��o para um n� do vetor ser maior que a m�dia
				cout<<X[i]<<" ";  //mostrar� os n�meros maior que a m�dia
		}
	cout<<endl;  //final de linha 
		
	return 0;
	
}