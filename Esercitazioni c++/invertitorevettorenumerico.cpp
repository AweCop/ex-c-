#include <iostream>
#include <stdlib.h>
 using namespace std;
 int main(){
 	int ciclo=0;
 	int n;
 	cout << "Inserisci il numero di dati da scambiare: ";
 	cin >> n;
 	cout << "\n";
 	int y=n;
 	float ve[n];
 	for(ciclo=0;ciclo<y;ciclo++){
 		cout << "inserisci: ";
 		cin >> ve[ciclo];
 		cout << "\n";
	 }
 	for(n=n-1;n>=0;n--){
 		cout << ve[n] << " , ";
 		if(n==0){
 			cout << "Complimenti\n Made by Ivan Abrami\n";
		 }
	 }
	 system("pause");
 }
