#include <iostream>
#include <windows.h>
#include <stdio.h>
using namespace std;
int main (){
	//LUIS ANGEL RODRIGUEZ
    //24041512
	
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	char cad [80];
	int i,j,k;
	
	puts("Usando scanf con juegos de inspección\n");
	puts("Dame una cadena con espacios");
	scanf("%s",cad);
	cout<<cad<<"\n";
	fflush(stdin);
	puts("dame una cadena de mayuscúlas y espacios");
	scanf("%[ ABCDEFGHIJKLMNOPQRSTUVWXYZ]",cad);
	puts(cad);
	puts("Dame una cadena de mayúsculas, minúsculas y espacios\n");
	fflush(stdin);
	scanf("%[a-zA-Z]",cad);
	cout<<cad<<"\n";
	puts("Dame una cadena con cualquier caracter y termina con enter");
	fflush(stdin);
	scanf("%[^\n]",cad);
	puts(cad);
	puts ("dame 3 numeros entero de maximo 3 cifras ");
	scanf("%3d %3d %3d",&i,&j,&k);
	printf("%d %d %d",i,j,k);
	
	
	return 0;
}

