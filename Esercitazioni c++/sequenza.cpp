#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	float a , b , c;
	cout << "Inserisci tre numeri:\n";
	start1:
	cout << "inserire a:";
	cin >> a;
	start2:
	cout << "inserire b:";
	cin >> b;
	start3:
	cout << "inserire c:";
	cin >> c;
	if(a==b && b==c){
		cout << "Tutti i numeri sono uguali!\n";
		goto start1;
	}
	else if(a==b && b!=c){
		cout << "a e bsono uguali!\n";
		goto start2;
	}
	else if(a!=b && b==c){
		cout << "b e c sono uguali!\n";
		goto start3;
	}
	else if(a==c && b!=c){
		cout << "a e csono uguali\n";
		goto start3;
	}
	else{}
	if(a>b && b>c){
		cout << "Il numero maggiore è " << a 
		<< " e la sequenza crescente dei numeri è: " << c << " , " << b << " , " << c <<"\n";
	}
	else if( a>b && c>b && a>c){
		cout << "Il numero maggiore è " << a 
		<< " e la sequenza crescente dei numeri è: " << b << " , " << c << " , " << a <<"\n";
	}
	else if( a>b && c>b && c>a){
		cout << "Il numero maggiore è " << c 
		<< " e la sequenza crescente dei numeri è: " << b << " , " << a << " , " << c <<"\n";
	}
	else if( b>a && a>c){
		cout << "Il numero maggiore è " << b 
		<< " e la sequenza crescente dei numeri è: " << c << " , " << a << " , " << b <<"\n";
	}
	else if(b>a && c>a && b>c){
		cout << "Il numero maggiore è " << b 
		<< " e la sequenza crescente dei numeri è: " << a << " , " << c << " , " << b <<"\n";
	}
	else{
		cout << "Il numero maggiore è " << c 
		<< " e la sequenza crescente dei numeri è: " << a << " , " << b << " , " << c <<"\n";
	}
	cout << "Made by Ivan Abrami :)\n" ;
	system("pause");
}
