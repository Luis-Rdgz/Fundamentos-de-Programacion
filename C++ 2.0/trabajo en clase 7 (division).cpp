#include <iostream>
using namespace std;
int  main ()
{
	//lUIS ANGEL RODRIGUEZ
	//24041512
	
	float numerador,denominador;
	cout<<"Dame el numerador (dividendo): ";
	cin>>numerador;
	cout<<"Dame le denominador (divisor): ";
	cin>>denominador;
	
	if(denominador)
	   cout<<numerador<<"/"<<denominador<<"="<<numerador/denominador<<"\n";
	else
	   cout<<"La division sobre cero no se permite\n";
	   
	   system("pause");
	   
	if(denominador!=0)
	   cout<<numerador<<"/"<<denominador<<"="<<numerador/denominador<<"\n";
	else
	   cout<<"La division sobre cero no se permite\n";
	
	   system("pause");
	   
	if(!denominador)
	   cout<<"La division sobre cero no  se permite\n";
	else
	   cout<<numerador<<"/"<<denominador<<"="<<numerador/denominador<<"\n";
	
	
	
	return 0;
}