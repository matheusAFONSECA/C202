#include <iostream>
#include <cstring>

using namespace std;

int main(){
	//declaração de variáveis
	int X, m, M=0;
	char nome[1000], c;
	
	//entrada do inteiro
	cin>>X;

	//entrada do nome
	cin.ignore();
	cin.getline(nome,100);
	
	m=strlen(nome);  //atribuição da quantidade de caracteres
	
	for(int i=0; i<m; i++){  //analise de maiusculas
		c=nome[i];
		if (isupper(c)){
			M++;
		}
	}
	
	//saida do n° de maiusculas
	cout<<M<<endl;
	
	return 0;
	
}