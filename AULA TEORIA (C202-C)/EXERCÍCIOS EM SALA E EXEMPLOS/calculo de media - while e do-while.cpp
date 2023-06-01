#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	
	//declaração de variáveis
	int m;
	float nota1, nota2, media;
	
	do
	{
		cout<<"Digite a sua matricula: ";
		cin>>m; //entrada da matricula do aluno
		cout<<"Declare as notas da prova 1 e 2, respectivamente: ";
		cin>>nota1>>nota2; //entrada de notas
		media=(nota1+nota2)/2; //calculo da media/ 
		cout<<"A média do aluno de matricula "<<m<<" é: "<<media<<endl;
		if (media>=60) //condição para receber aprovação
			cout<<"APROVADO!!!"<<endl;
		else if(media<30)
			cout<<"REPROVADO"<<endl;
		else 
			cout<<"EXAME"<<endl;
		
	}while(m>=1); //caso a condição seja falsa é deixado de lado o boloco de comando e segue o programa
	
	return 0;
	
}