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
	cout<<endl<<"X: "<<X<<"		";
	if(saida==0)  /*caso a vari�vel saiada continue com o valor 0,
				 indica que o vetor n�o tem um n�mero igual a X*/
			cout<<"Valor n�o encontrado"<<endl;
	else{
		cout<<"Posi��o(�es) no vetor: ";
		
		for(i=0; i<N; i++){
			if(A[i]==X)
				cout<<i<<"  ";  //mostrar as posi��es quem tem zero
		}
		
		cout<<endl;  //final de linha
	}
	
	return 0;
	
} 