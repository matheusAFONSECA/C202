#include <iostream>

using namespace std;

int resultado(int x){  //fun��o secund�ria
	if (x==1){  //n�o � considerado o 1 como n�mero primo
		return 0;
	}
	else if(x==2 || x==5 || x==7|| x==11 || x==13){  //"primos prim�rios"
		return 1;
	}
	
	else if(x%2==0 || x%3==0 || x%5==0 || x%7==0 || x%11==0){  //condi��o para n�o ser primo
		return 0;
	}
	else{
		return 1;
	}
}

int main(){  //fun��o principal
	//declara��o de vari�veis
	int x, z;
	
	cin>>x;  //entrada do valor de x
	
	z=resultado(x);
	
	if (z==0){
		cout<<"Not"<<endl;  //caso o n�mero n�o seja primo
	}
	else {
		cout<<"Primo"<<endl;  //caso o n�mero seja primo
	}
	
	return 0;
	
}