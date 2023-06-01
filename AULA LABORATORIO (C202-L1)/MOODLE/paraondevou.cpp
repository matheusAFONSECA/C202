#include <iostream>

using namespace std;

int main()
{	
	//declaração de variáveis
	int A, B, C, CO;
	
	//entrada de dados
	cin>>A>>B>>C;
	cin>>CO;
	
	//saida de dados
	switch(CO)
	{
		case 2:
		{
			if (A>B && A>C)
				cout<<A<<" ";
			else if (B>A && B>C)
				cout<<B<<" ";
			else if (C>A && C>B)
				cout<<C<<" ";
		}
		{
			if (A>B && A<C)
				cout<<A<<" ";
			else if (B>A && B<C)
				cout<<B<<" ";
			else if (C>A && C<B)
				cout<<C<<" ";
		}
		{
			if (A<B && A<C)
				cout<<A<<endl;
			else if (B<A && B<C)
				cout<<B<<endl;
			else if (C<A && C<B)
				cout<<C<<endl;
		}
			break;
		case 1:
		{
			if (A<B && A<C)
				cout<<A<<" ";
			else if (B<A && B<C)
				cout<<B<<" ";
			else if (C<A && C<B)
				cout<<C<<" ";
		}
		{
			if (A>B && A<C)
				cout<<A<<" ";
			else if (B>A && B<C)
				cout<<B<<" ";
			else if (C>A && C<B)
				cout<<C<<" ";
		}
		{
			if (A>B && A>C)
				cout<<A<<endl;
			else if (B>A && B>C)
				cout<<B<<endl;
			else if (C>A && C>B)
				cout<<C<<endl;
		}
			break;
		default:
			cout<<"Erro!"<<endl;
	}
	
	return 0;
	
}