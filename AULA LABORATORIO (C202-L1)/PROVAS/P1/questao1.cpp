#include <iostream>
#include <iomanip>  //biblioteca que permite delimitar casas decimais

using namespace std;

int main()
{
	//declara��o de vari�veis
	int N, Q;
	char C, maior;
	double VP, VA, soma, diferenca, retorno, subiu;
	
	cin>>N;  //quantidade de a��es
	
	soma=0;  //soma que representa o capital investido
	diferenca=0;  //representa o valor atual das a��es
	subiu=0;  //representa se houve aumento ou decaimento do valor investido
		
	//entrada de demais dados
	for(int i=1; i<=N; i++){
		cin.ignore();
		cin>>C;  //C�digo da a��o
		cin>>Q;  //Quantidade comprada
		cin>>VP;  //Valor Pago por papel
		cin>>VA;  //Valor atual do papel
		
		//calculos
		soma=soma+(VP*Q);  //representa o valor investido
		diferenca=diferenca+(VA*Q);  //representa o valor investido atual
		subiu=VA-VP;  //aumento ou decaimento do valor da a��o
	
		if(i==1)  //define o par�metro de retorno
			retorno=VA-VP;
		else if(subiu>=retorno){  //define qual teve o maior retorno
			retorno=subiu;
			maior==C;
		}
		
		if(i==N){
			//saida de dados
			cout<<fixed<<setprecision(2);  //delimita duas casas decimais
			cout<<endl<<"Capital investido atual: "<<diferenca<<endl;
			
			if(diferenca>soma)  //condi��o para se ter lucro
				cout<<"Lucro de: "<<diferenca-soma<<endl;
			else if(soma>diferenca)  //condi��o para se ter prejuizo
				cout<<"Prejuizo de: -"<<soma-diferenca<<endl;
			
		}
			
	}
	
	return 0;
	
}