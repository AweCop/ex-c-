#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	float a;
	float b;
	int c;
	int d;  
	
	cout << "Inserisci il primo fattore: ";
	cin >> a;
	cout << "\n\n";
	
	cout << "Inserisci il secondo fattore: ";
	cin >> b;
	cout << "\n\n";
	
	c=2;
	d=a;
	
	while(b>=c){
		c=c+1;
		a=a+d;
	}
	
	cout << "Il risultato è: " << a << "\n\n Made by Ivan Abrami\n\n";
	
	system("pause");
}
