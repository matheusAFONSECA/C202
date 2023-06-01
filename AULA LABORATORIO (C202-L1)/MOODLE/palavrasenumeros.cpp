#include <iostream>
#include <cstring>

using namespace std;

int main(){
	//declaração de variáveis
	char texto1[50], texto2[50], c;
	int m, l;
	
	cin>>texto1;  //entrada do primeiro texto
	
	cin.ignore();
	cin>>texto2;  //entrada do texto que será comparado
	
	l=strlen(texto1);  //verificação da quantidade de caracteres
	
	m=strcmp(texto1,texto2);  //comparação de strings
	
	//saida de dados
	if(m==0){
		for(int i=0; i<l; i++){
			c=texto1[i];
			if(isalpha(c))  //condição para ser letra
			cout<<texto1[i];
		}
		cout<<endl;
	}
	else{
		cout<<"Nao sao iguais"<<endl;
	}
	
	return 0;
	
}