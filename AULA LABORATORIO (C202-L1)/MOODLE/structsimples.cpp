#include <iostream>
#include <cstring>

using namespace std;

struct dados{  //declara��o de struct
	double casadas, media, sexo;
	char nome[50];
	char saida[5], estado;
	int retorno, idade, maior;
	char c, s, v, d;
	};

int main(){
	dados x[1000];  //defini��o da struct
	int i=0, c=0, p=0;
	
	strcpy(x[995].saida,"sair");
	
	cin.getline(x[i].nome,50);  //entrada do primeiro nome
	x[996].retorno=strcmp(x[i].nome, x[995].saida);  //analise do nome

	x[990].casadas=0;  //controle de pessoas casadas
	x[898].media=0;  //controle da idade media
	
	while(x[996].retorno!=0){  //entrada de dados
		cin.ignore();
		do{  //declara��o do sexo
			cin>>x[i].sexo;
		}while(!(x[i].sexo==1 || x[i].sexo==2));
		
		do{  //declara��o de estado civil
			cin.ignore();
			cin>>x[i].estado;
			switch(x[i].estado){
				case'C': 
					x[990].casadas++;
					c++;
					break;
				case'S': 
					c++;
					break;
				case'V': 
					c++;
					break;
				case'D': 
					c++;
					break;
			}
		}while(c==0);
		
		do{  //declar��o da idade
			cin>>x[i].idade;
			if(i==0)
				x[899].maior=x[i].idade;  //par�metro da idade
			else if(x[899].maior<x[i].idade && x[i].sexo==1){  //condi��o para ser homem e mais velho
				x[899].maior=x[i].idade;  //redefini��o da maior idade
				strcpy(x[897].nome,x[i].nome);  //defini��o do nome do homem mais velho
			}
		}while(x[i].idade<0);
		
		x[898].media = x[898].media+x[i].media;
		
		p++;  //controle da quantidade de pessoas	
		i++;  //incremento no controle de vari�vel
		c=0;  //controle da entrada de dados do estado civil
		
		cin.ignore();
		cin.getline(x[i].nome,50);  //reentrada do primeiro nome
		x[996].retorno=strcmp(x[i].nome, x[995].saida);  //an�lise do nome
	}
	
	//saida de dados
	cout<<"Porcentagem de pessoas casadas: "<<x[990].casadas++/p<<"%"<<endl;
	cout<<"Idade media da populacao: "<<x[898].media/p<<" anos"<<endl;
	cout<<"Nome e idade de homen mais velho: "<<x[897].nome<<" "<<x[899].maior<<" anos"<<endl;
	
	return 0;
	
}