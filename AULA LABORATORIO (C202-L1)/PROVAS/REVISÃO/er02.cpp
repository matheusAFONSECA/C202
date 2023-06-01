#include <iostream>

using namespace std;

int par_impar(int N){  //função auxiliar 
	if(N%2==0)  //condição para um n° ser par
		return 1;
	else 
		return 0;
}

int modulo(int &N){  //função auxiliar
	if (N<0)  //condição para um n° ser negatico;
		return N = N*(-1);  //mudança de sinal do n°  
	else 
		return N = N;
}

void tabuada(int N){  //função auxiliar
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

int main(){  //função principal
	setlocale(LC_ALL, "Portuguese");
	//declaração de variáveis
	int N, a;
	
	do{
		cin>>N;  //entrada do número que será analisado
	}while(N==0);  //critica para ser diferente de zero
	
	a = par_impar(N);  //análise se é par e impar
	if(a==1)
		cout<<"O número é par"<<endl;
	else 
		cout<<"O número é impar"<<endl;
	
	cout<<"|"<<N<<"| = "<<modulo(N)<<endl;  //saida de modulo
	
	tabuada(N);  //saida da tabuada do n°
	
	return 0;
}