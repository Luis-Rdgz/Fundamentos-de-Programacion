#include <iostream>
#include <windows.h>
using namespace std;
int main ()
{
	//lUIS ANGEL RODRIGUEZ
	//24041512
	
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x,factorial;
	cout<<"dame un número para calcular su factorial: ";
	cin>>factorial;
	cout<<factorial;
	for (x=factorial-1;x>=1;x--){
		cout<<"X"<<x;
		factorial=factorial*x;
	}
		cout<<"="<<factorial;
		
	return 0;
	
	
	
	
	
	
	
}