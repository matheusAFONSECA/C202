#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	//declaração de variáveis
	int c, i;
	double preco, paga;
	char nome[60], cidade[60];
	
	//entrada de dados
	cout<<"Qual o código do produto: ";
	cin>>c;
	cout<<"Qual o preço do produto: ";
	cin>>preco;
	cout<<"Nome do cliente: ";
	cin.ignore();
	cin.getline(nome,60);
	cout<<"Cidade do cliente: ";
	cin.getline(cidade,60);
	cout<<"Idade do cliente: ";
	cin>>i;
	cout<<"Pagamento do cliente: ";
	cin>>paga;
	
	//saida de dados	
	switch (c)
	{
		case 1: 
			cout<<"Queijo"<<endl;
			break;
		case 2: 
			cout<<"Geleia"<<endl;
			break;
		case 3: 
			cout<<"Doce"<<endl;
			break;
		case 4: 
			cout<<"Refrigerante"<<endl;
			break;
		case 5: 
			cout<<"Sorvete"<<endl;
			break;
		case 6: 
			cout<<"Presunto cru"<<endl;
			break;
		case 7: 
			cout<<"Vinho"<<endl;
			break;
	}
	cout<<fixed<<setprecision(2);
	cout<<"Valor Total = "<<preco<<endl;
	if(paga>=preco)
		cout<<"Troco = "<<paga-preco<<endl;
		else if (paga==preco)
			cout<<"Não tem troco"<<endl;
			else
				cout<<"valor de compra não atingido"<<endl;
		
	return 0;
		
}