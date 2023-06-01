#include <iostream>

using namespace std;

int resultado(int x){  //função secundária
	if (x==1){  //não é considerado o 1 como número primo
		return 0;
	}
	else if(x==2 || x==5 || x==7|| x==11 || x==13){  //"primos primários"
		return 1;
	}
	
	else if(x%2==0 || x%3==0 || x%5==0 || x%7==0 || x%11==0){  //condição para não ser primo
		return 0;
	}
	else{
		return 1;
	}
}

int main(){  //função principal
	//declaração de variáveis
	int x, z;
	
	cin>>x;  //entrada do valor de x
	
	z=resultado(x);
	
	if (z==0){
		cout<<"Not"<<endl;  //caso o número não seja primo
	}
	else {
		cout<<"Primo"<<endl;  //caso o número seja primo
	}
	
	return 0;
	
}