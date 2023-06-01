#include <iostream>
#include <iomanip>  //biblioteca que libera o comando de casas decimais
#include <cmath>  //biblioteca que libera fun��es matem�ticas

using namespace std;

int main()
{
	//declara��o de vari�veis
	double X;
	int A;
	
	cin>>A;  //entrada do valor de A
	
	//condi��o
	if(A%2==0)  //condi��o para ser par
		X=A*sqrt(A);
	else if(A%2!=0)  //condi��o para ser impar
		X=pow(A,3)/(A+3);
	
	//saida de dados
	cout<<fixed<<setprecision(3);  //delimita tr�s casas decimais
	if (X>=0 || X<0)
		cout<<"X = "<<X<<endl;
	else
		cout<<"math error"<<endl;
	
	return 0;
	
}