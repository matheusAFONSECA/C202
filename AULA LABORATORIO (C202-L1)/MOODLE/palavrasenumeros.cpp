#include <iostream>
#include <cstring>

using namespace std;

int main(){
	//declara��o de vari�veis
	char texto1[50], texto2[50], c;
	int m, l;
	
	cin>>texto1;  //entrada do primeiro texto
	
	cin.ignore();
	cin>>texto2;  //entrada do texto que ser� comparado
	
	l=strlen(texto1);  //verifica��o da quantidade de caracteres
	
	m=strcmp(texto1,texto2);  //compara��o de strings
	
	//saida de dados
	if(m==0){
		for(int i=0; i<l; i++){
			c=texto1[i];
			if(isalpha(c))  //condi��o para ser letra
			cout<<texto1[i];
		}
		cout<<endl;
	}
	else{
		cout<<"Nao sao iguais"<<endl;
	}
	
	return 0;
	
}