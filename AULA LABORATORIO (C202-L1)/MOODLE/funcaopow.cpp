#include <iostream>

using namespace std;

int resultado(int x, int y){  //fun��o secund�ria
	int z;  //respons�vel por guardar a resposta
	int i=0;  //respons�vel por controlar a multiplica��o
	
	do{  //inicio do calculo da potencia��o
		if (y==0){
			z=1;  //defini��o da potencia��o como 1 caso seja elevado a 0
		}
		else if (i==0){
			z=x;  //seria x elevado a 1
		}
		else{
			z=z*x;  //seria x elevado a ele mesmo a partir do 2
		}
		
		i++;  //incremento da vari�vel
	}while(i<y);
	
	return z;  //valor que ser� retornado para a fun��o principal
}


int main(){  //fun��o principal
	//declara��o de vari�veis
	int x, y;
	
	cin>>x>>y;  //entrada do valor de x e y
	
	cout<<resultado(x,y)<<endl;
	
	return 0;
	
}