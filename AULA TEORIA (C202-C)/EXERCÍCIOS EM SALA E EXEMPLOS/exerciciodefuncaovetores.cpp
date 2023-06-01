#include <iostream>
#include <cmath>

using namespace std;

void converte( double &x, double &y, double &z){  //função auxiliar
	double p, o, l;
	p = sqrt(pow(x,2)+pow(y,2)+pow(z,2));  //calculo de p (rô)
	o = atan(y/x)*(180/3.14159);  //calculo de o (teta)
	l = acos(z/p)*(180/3.14159);  //calculo de l
	
	x=p;
	y=o;
	z=l;
	
	return; 
}

int main(){
	//declaração de variáveis
	double x, y, z;
	
	cout<<"Coordenadas retangulares: "<<endl;
	cin>>x>>y>>z;  //entrada de dados
	
	converte(x, y, z);  //chamada da função auxiliar
	
	//saida de dados
	cout<<endl<<"Coordenadas esfericas: "<<endl;
	cout<<"P("<<x<<";"<<y<<";"<<z<<")"<<endl;
	
	return 0;
	
}