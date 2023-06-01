#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

struct dados{  //declara��o de struct
	int mat, N, J;
	char nome[100], menornome[100], jnome[100];
	float media, nota, menor, copia, nota1;
};

int main(){
	dados x;  //defini��o da struct
	
	cin>>x.N;  //entrada da quantidade de pessoas
	
	cin>>x.J;  //entrada da pessoa que ser� extraida as informa��es

	x.media=0;  //vari�vel respos�vel pela m�dia
		
	for(int i=1; i<=x.N; i++){  //inicio da entrada de dados
		cin.ignore();
		cin.getline(x.nome,100);  //entrada do nome
		
		cin>>x.mat>>x.nota;  //entrada da matricula e nota
		if(i==1){  //par�metro de anlise da menor nota
			strcpy(x.menornome, x.nome);  //defini��o do nome
			x.menor=x.nota;  //defini��o de nota par�metro
		}
		else{
			if(x.nota<x.menor){  //condi��o pra ter uma nota menor
				x.menor=x.nota;
				strcpy(x.menornome, x.nome);
			}
		}
		x.media= x.media+x.nota;  //soma das notas
		
		if(i==x.J){  //condi��o para extrair a informa��o
			strcpy(x.jnome, x.nome);  //defini��o do nome da pessoa j
			x.nota1=x.nota;  //defini��o da nota da pessoa j
			x.copia=x.mat;  //defini��o da matricula da pessoa j
		}
	}
	
	//saida de dados
	cout<<fixed<<setprecision(2);
	cout<<"Media: "<<x.media/x.N<<endl;
	cout<<x.menornome<<endl;
	cout<<x.jnome<<" "<<x.copia<<" "<<x.nota1<<endl;
	
	return 0;
	
}