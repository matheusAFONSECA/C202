#include <iostream>
#include <locale>
#include <iomanip>
#include <cstring>

using namespace std;

struct ficha{  //definição de variáveis na struct
	char nome[40];
	int peso;
	double preco;
};

int main(){
	setlocale(LC_ALL,"Portuguese");
	//declaração de veriáveis
	ficha x[50];
	int i, contador=1, retorno;
	double soma=0, media;
	
	cout<<"Declare o nome da barraca "<<contador<<" (ou digite 'SAIR' para encerrar cadastro): ";
	cin.getline(x[contador].nome, 40);  //entrada do nome da barraca
	retorno=strcmp(x[contador].nome, "SAIR");
	
	//entrada de dados
	while(contador<=50 && retorno!=0){
		cout<<"Declare o peso da porção de torresmo(em gramas): ";
		cin>>x[contador].peso;  //entrada do peso da porção
		
		cout<<"Declare o preço da porção de torresmo (em R$): ";
		cin>>x[contador].preco;  //entrada do preço da porção
		
		soma = soma+x[contador].preco;  //guardará a soma dos preços
		
		contador++;
		
		cout<<endl<<"Declare o nome da barraca "<<contador<<" (ou digite 'SAIR' para encerrar cadastro): ";
		cin.ignore();
		cin.getline(x[contador].nome, 40);  //entrada do nome da barraca
		retorno=strcmp(x[contador].nome, "SAIR");
	}
	
	media = soma/(contador-1);  //calculo da média
	
	//saida de dados
	cout<<fixed<<setprecision(2);
	cout<<"Média dos preços: "<<media<<endl;
	cout<<"Barracas com o preço da porção menor do que a média: ";
	for(i=1; i<=contador; i++){
		if(x[i].preco<media)  //condição para o preço da porção de torresmo ser menor que a média
			cout<<x[i].nome<<"\t";
	}
	cout<<endl;
	
	return 0;
	
}