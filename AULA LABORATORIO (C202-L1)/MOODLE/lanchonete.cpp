#include <iostream>
#include <iomanip>

using namespace std;

int main()
{	
	//declaração de variáveis
	int i, q;
	
	//entrada de dados
	cin>>i>>q;
	
	//saida de dados
	switch(i)
	{
		cout<<fixed<<setprecision(2);
		case 1:
			cout<<"Total: R$ "<<(q*3)<<endl;
			break;
		case 2:
			cout<<"Total: R$ "<<(q*5.5)<<endl;
			break;
		case 3:
			cout<<"Total: R$ "<<(q*6)<<endl;
			break;
		case 4:
			cout<<"Total: R$ "<<(q*3)<<endl;
			break;
		case 5:
			cout<<"Total: R$ "<<(q*2.5)<<endl;
			break;
		default: 
			cout<<"Produto inexistente"<<endl;
	}
	
	return 0;	
}