#include <iostream>
#include <locale>

using namespace std;

int main()
{	
	setlocale (LC_ALL,"Portuguese");
	
	//declara��o de vari�veis
	double SI=0, NA=0, NS=0, x, y, z;
	int op, n;
	
	//entrada no n�mero de pessoas
	cout<<"Declare o n�mero de pessoas: ";
	cin>>n;
	
	//inicio do ciclo de avalia��es
	for (int i=1; i<=n; i++)
	{
		cout<<"Declare a avalia��o: ";
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
	
	cout<<"S�o "<<SI<<" pessoa(s) que responderam sim, "<<x<<"%"<<" do total"<<endl;
	cout<<"S�O "<<NA<<" pessoa(s) que responderam n�o, "<<y<<"%"<<" do total"<<endl;
	cout<<"S�O "<<NS<<" pessoa(s) que responderam n�o sei, "<<z<<"%"<<" do total"<<endl;

}