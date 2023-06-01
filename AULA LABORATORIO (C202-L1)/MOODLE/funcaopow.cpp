#include <iostream>

using namespace std;

int resultado(int x, int y){  //função secundária
	int z;  //responsável por guardar a resposta
	int i=0;  //responsável por controlar a multiplicação
	
	do{  //inicio do calculo da potenciação
		if (y==0){
			z=1;  //definição da potenciação como 1 caso seja elevado a 0
		}
		else if (i==0){
			z=x;  //seria x elevado a 1
		}
		else{
			z=z*x;  //seria x elevado a ele mesmo a partir do 2
		}
		
		i++;  //incremento da variável
	}while(i<y);
	
	return z;  //valor que será retornado para a função principal
}


int main(){  //função principal
	//declaração de variáveis
	int x, y;
	
	cin>>x>>y;  //entrada do valor de x e y
	
	cout<<resultado(x,y)<<endl;
	
	return 0;
	
}