#include <iostream>
#include <cstring>

using namespace std;

int main(){
	//declaração de variáveis
	char texto[50];
	int m;
		
	cin.getline(texto,50);  //entrada do texto
	
	m=strlen(texto);  //atribuição da quantidade de caracteres
	
	for(int i=m; i>=0; i--){  //saida de dados
		cout<<texto[i];
	}
	
	//final de linha
	cout<<endl;
	
	return 0; 
	
}