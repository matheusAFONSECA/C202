#include <iostream>
#include <iomanip>  //biblioteca que libera a função de delimitar decimais

using namespace std;

int main()
{
	//declaração de variáveis
	double soma;
	int P, Q;
	char nome[60];
		
	soma=0;  //valor a ser pago pela compra
	
	do{  //verificar se o pedido vai ser realizado
		cin>>P;  //código do pedido
		switch(P){
			case (-1):  //condição para a relização de nenhum pedido
				cout<<endl<<"Volte sempre :)"<<endl;
				break;
		}
	}while(P!=(-1) && P<1 && P>5);
	
	
	while(P!=(-1)){
		cin>>Q;  //quantidade do pedido
		
		switch(P){
			case 1:  //caso o pedido seja um cafezinho
				soma=soma+(Q*1.5);
				break;
			case 2:  //caso o pedido seja um pão de queijo
				soma=soma+(Q*3.5);
				break;
			case 3:  //caso o pedido seja um croissant tradicional
				soma=soma+(Q*4);
				break;
			case 4:  //caso o pedido seja um capuccino
				soma=soma+(Q*2.5);
				break;
			case 5:  //caso o pedido seja um macaron
				soma=soma+(Q*3.5);
				break;
		}
		
		cin>>P;  //reentrada de pedido
		
		switch(P){
			case -1:  //valor que P tem que assumir para encerrar o pedido
				if(soma>0)
				{
					cin.ignore();
					cin.getline(nome,60);  //entrada do nome do cliente
				
					//saida de dados
					cout<<fixed<<setprecision(2);
					cout<<endl<<"Valor a pagar: "<<soma<<endl;
					cout<<":) Obrigado pelo pedido "<<nome<<endl;
				}
				else
					cout<<endl<<"Volte sempre :)"<<endl;
				break;
		}
	}
	
	return 0;
	
}