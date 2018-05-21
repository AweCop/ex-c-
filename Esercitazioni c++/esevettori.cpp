#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int a;												//Numero di valori del vettore
	int n=0;											//Variabile "recipiente" per il primo ciclo
	int b=0;											//Variabile "recipiente" per il secondo ciclo
	float d=0;											//Media dei valori del vettore
	float c=0;											//somma dei valori del vettore
	float ve[a];										//Vettore principale
	
	cout << "Quanti numeri desideri inserire? ";
	cin >> a;											//Inserimento del numero di valori del vettore
	cout << "\n";
	
	for(n=0;n<a;n++){									//Ciclo inserimento valori
		cout << "inserisci un valore: ";
		cin >> ve[n];
		cout << "\n";
	}
	
	for(b=0;b<a;b++){									//Ciclo somma
		 c=c+ve[b];
	}
	
	cout << "La somma dei numeri è: " << c << "\n\n";
	
	 d= c/8;
	 
	cout << "La media tra i numeri è: " << d << "\n\n"
	<< "Made by Ivan Abrami\n\n";
	
	system("pause");
}

