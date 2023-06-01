#include <iostream>
#include <locale>
#include <iomanip>
#include <cstring>

using namespace std;

struct ficha{  //defini��o de vari�veis na struct
	char nome[40];
	int peso;
	double preco;
};

int main(){
	setlocale(LC_ALL,"Portuguese");
	//declara��o de veri�veis
	ficha x[50];
	int i, contador=1, retorno;
	double soma=0, media;
	
	cout<<"Declare o nome da barraca "<<contador<<" (ou digite 'SAIR' para encerrar cadastro): ";
	cin.getline(x[contador].nome, 40);  //entrada do nome da barraca
	retorno=strcmp(x[contador].nome, "SAIR");
	
	//entrada de dados
	while(contador<=50 && retorno!=0){
		cout<<"Declare o peso da por��o de torresmo(em gramas): ";
		cin>>x[contador].peso;  //entrada do peso da por��o
		
		cout<<"Declare o pre�o da por��o de torresmo (em R$): ";
		cin>>x[contador].preco;  //entrada do pre�o da por��o
		
		soma = soma+x[contador].preco;  //guardar� a soma dos pre�os
		
		contador++;
		
		cout<<endl<<"Declare o nome da barraca "<<contador<<" (ou digite 'SAIR' para encerrar cadastro): ";
		cin.ignore();
		cin.getline(x[contador].nome, 40);  //entrada do nome da barraca
		retorno=strcmp(x[contador].nome, "SAIR");
	}
	
	media = soma/(contador-1);  //calculo da m�dia
	
	//saida de dados
	cout<<fixed<<setprecision(2);
	cout<<"M�dia dos pre�os: "<<media<<endl;
	cout<<"Barracas com o pre�o da por��o menor do que a m�dia: ";
	for(i=1; i<=contador; i++){
		if(x[i].preco<media)  //condi��o para o pre�o da por��o de torresmo ser menor que a m�dia
			cout<<x[i].nome<<"\t";
	}
	cout<<endl;
	
	return 0;
	
}