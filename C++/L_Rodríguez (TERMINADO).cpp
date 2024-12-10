#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <math.h>
using namespace std;
 int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	//Luis Angel Rodríguez 24041512
	
	int calif1,calif2,calif3,pct1,pct2,pct3,promedio_f;
	cout<<"La primera calificación vale 10%\n la segunda calificación vale 10%\n y la  tercera calificación vale 80%\n";
	cout<<"Dame la calificación que sea de 0 a 100: ";
	cin>>calif1;
	cout<<"Dame la segunda calificación de 0 a 100: ";
	cin>>calif2;
	cout<<"Dame la tercera calificación de 0 a 100: ";
	cin>>calif3;
	
	//calif1=10% calif2=10% calif3=80%
	pct1=(calif1*.10);
	pct2=(calif2*.10);
	pct3=(calif3*.80);
	promedio_f=trunc(pct1+pct2+pct3);
	cout<<"El porcentaje de la primera calificación es de: "<<pct1<<"\n";
	cout<<"El porcentaje de la segunda calificación es de: "<<pct2<<"\n";
	cout<<"El porcentaje de la tercera calificación es de: "<<pct3<<"\n";
	cout<<"La calificación final es de "<<promedio_f;
	
	
    
	
	return 0;
	
	
	
	
}