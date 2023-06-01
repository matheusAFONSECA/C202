#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

struct dados{  //declaração de struct
	int mat, N, J;
	char nome[100], menornome[100], jnome[100];
	float media, nota, menor, copia, nota1;
};

int main(){
	dados x;  //definição da struct
	
	cin>>x.N;  //entrada da quantidade de pessoas
	
	cin>>x.J;  //entrada da pessoa que será extraida as informações

	x.media=0;  //variável resposável pela média
		
	for(int i=1; i<=x.N; i++){  //inicio da entrada de dados
		cin.ignore();
		cin.getline(x.nome,100);  //entrada do nome
		
		cin>>x.mat>>x.nota;  //entrada da matricula e nota
		if(i==1){  //parâmetro de anlise da menor nota
			strcpy(x.menornome, x.nome);  //definição do nome
			x.menor=x.nota;  //definição de nota parâmetro
		}
		else{
			if(x.nota<x.menor){  //condição pra ter uma nota menor
				x.menor=x.nota;
				strcpy(x.menornome, x.nome);
			}
		}
		x.media= x.media+x.nota;  //soma das notas
		
		if(i==x.J){  //condição para extrair a informação
			strcpy(x.jnome, x.nome);  //definição do nome da pessoa j
			x.nota1=x.nota;  //definição da nota da pessoa j
			x.copia=x.mat;  //definição da matricula da pessoa j
		}
	}
	
	//saida de dados
	cout<<fixed<<setprecision(2);
	cout<<"Media: "<<x.media/x.N<<endl;
	cout<<x.menornome<<endl;
	cout<<x.jnome<<" "<<x.copia<<" "<<x.nota1<<endl;
	
	return 0;
	
}