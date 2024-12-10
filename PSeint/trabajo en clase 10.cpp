#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int  main()
{
	//LUIS ANGEL RODRIGUEZ
    //24041512
    
	int entera;
	float flotante;
	char letra,palabra[50];//declara var char y arreglo char
	cout<<"lectura de datos usando scanf\n";
	cout<<"dame un valor entero: ";
	fflush(stdin);
	scanf("%d",&entera);
	cout<<"dame un valor flotante ";
	fflush(stdin);
	scanf("%f",&flotante);
	cout<<"dame un valor tipo char ";
	fflush(stdin);
	scanf("%c",&letra);
	cout<<"dame una cadena sin espacios ";
	fflush(stdin);
	scanf("%s",&palabra);/*sin espacios*/
	puts("impresion de los valores\n");
	cout<<entera<<"\n";
	cout<<flotante<<"\n";
	putchar(letra);
	putchar('\n');
	cout<<fixed;
	cout.precision(4);
	cout<<"impresion con precision. el valor flotante a 4 decimales: "<<flotante;
	return 0;
	
}