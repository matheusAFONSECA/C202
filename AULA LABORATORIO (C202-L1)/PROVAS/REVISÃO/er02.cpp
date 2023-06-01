#include <iostream>

using namespace std;

int par_impar(int N){  //fun��o auxiliar 
	if(N%2==0)  //condi��o para um n� ser par
		return 1;
	else 
		return 0;
}

int modulo(int &N){  //fun��o auxiliar
	if (N<0)  //condi��o para um n� ser negatico;
		return N = N*(-1);  //mudan�a de sinal do n�  
	else 
		return N = N;
}

void tabuada(int N){  //fun��o auxiliar
	cout<<"Tabuda de "<<N<<":"<<endl;
	cout<<"\t"<<N<<" x 0 = "<<N*0<<endl;
	cout<<"\t"<<N<<" x 1 = "<<N*1<<endl;
	cout<<"\t"<<N<<" x 2 = "<<N*2<<endl;
	cout<<"\t"<<N<<" x 3 = "<<N*3<<endl;
	cout<<"\t"<<N<<" x 4 = "<<N*4<<endl;
	cout<<"\t"<<N<<" x 5 = "<<N*5<<endl;
	cout<<"\t"<<N<<" x 6 = "<<N*6<<endl;
	cout<<"\t"<<N<<" x 7 = "<<N*7<<endl;
	cout<<"\t"<<N<<" x 8 = "<<N*8<<endl;
	cout<<"\t"<<N<<" x 9 = "<<N*9<<endl;
	cout<<"\t"<<N<<" x 10 = "<<N*10<<endl;
	
	return;
}

int main(){  //fun��o principal
	setlocale(LC_ALL, "Portuguese");
	//declara��o de vari�veis
	int N, a;
	
	do{
		cin>>N;  //entrada do n�mero que ser� analisado
	}while(N==0);  //critica para ser diferente de zero
	
	a = par_impar(N);  //an�lise se � par e impar
	if(a==1)
		cout<<"O n�mero � par"<<endl;
	else 
		cout<<"O n�mero � impar"<<endl;
	
	cout<<"|"<<N<<"| = "<<modulo(N)<<endl;  //saida de modulo
	
	tabuada(N);  //saida da tabuada do n�
	
	return 0;
}