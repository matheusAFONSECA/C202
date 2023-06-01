#include <iostream>
#include <cstring>

using namespace std;

struct dados{  //declaração de campos
	char placa[10], renavan[11]; 
	int veiculo;
};

int main(){
	setlocale(LC_ALL, "Portuguese");
	//declaração de variáveis
	dados x[11];
	
	do{
	cout<<"Qual a quantidade de veiculos? ";
	cin>>x[11].veiculo;  //entrada da quantidade de veiculos
	cin.ignore();
	}while(x[11].veiculo<0 || x[11].veiculo>10);
	
	for(int i=0; i<x[11].veiculo; i++){  //inicio de entrada de dados

		cout<<"Qual a placa do carro "<<i+1<<": ";
		cin.getline(x[i].placa, 10);  //entrada da placa do veiculo
		
		cout<<"Qual o renavan do carro "<<i+1<<": ";
		cin.getline(x[i].renavan, 11);  //entrada de renavan
	}
	
	for(int i=0; i<x[11].veiculo; i++){ //saida de dados
		cout<<endl<<i+1<<"° carro - "<<"placa: "<<x[i].placa<<"  e   renavan: "<<x[i].renavan<<";"<<endl;
	}
		
	return 0;
	
}