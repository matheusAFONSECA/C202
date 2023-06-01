#include <iostream>
#include <locale>

using namespace std;

int main()
{	
	setlocale (LC_ALL,"Portuguese");
	
	//declaração de variáveis
	double SI=0, NA=0, NS=0, x, y, z;
	int op, n;
	
	//entrada no número de pessoas
	cout<<"Declare o número de pessoas: ";
	cin>>n;
	
	//inicio do ciclo de avaliações
	for (int i=1; i<=n; i++)
	{
		cout<<"Declare a avaliação: ";
		cin>>op;
		
		if (op==1) 
			SI = SI+1;
		else if (op==2) 
			NA = NA+1;
		else if (op==3) 
			NS = NS+1;
	}
	
	x=100*(SI/n);
	y=100*(NA/n);
	z=100*(NS/n);
	
	cout<<"São "<<SI<<" pessoa(s) que responderam sim, "<<x<<"%"<<" do total"<<endl;
	cout<<"SÃO "<<NA<<" pessoa(s) que responderam não, "<<y<<"%"<<" do total"<<endl;
	cout<<"SÃO "<<NS<<" pessoa(s) que responderam não sei, "<<z<<"%"<<" do total"<<endl;

}