//Rock,Paper,Scissor Game
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main(){
	string a;
	string b;
	string c= "Scissors";
	string d= "Rock";
	string e= "Paper";
	int Punti1=0;
	int Punti2=0;
	cout << "Welcome in Rock Scissors Paper Game!\n\nLet's go!\n\n";
	while(Punti1<2 && Punti2<2){
		start:
		cout << "Utente: ";
		cin >> a;
		cout << endl;
		if(a=="Scissor" || a=="scissor" || a=="Scissors" || a=="scissors" 
			|| a=="Rock" || a=="rock" || a=="Paper" || a=="paper" 
			|| a=="papers" || a=="Papers" );
		else{
			goto start;
		}
		int b= rand() % 3 + 1;
		switch(b){
			case 1:{
				cout << "Pc: " << c << "\n\n";
				cout << "------------------------------------\n";
				if(a=="Scissor" || a=="scissor" || a=="Scissors" || a=="scissors"){
					cout << "\nPc: " << Punti2 << " Utente: " << Punti1 << endl;
				}
				else if(a=="Rock" || a=="rock" ){
					Punti1++;
					cout << "\nPc: " << Punti2 << " Utente: " << Punti1 << "\n\n";
				}
				else {
					Punti2++;
					cout << "\nPc: " << Punti2 << " Utente: " << Punti1 << "\n\n";
				}
				break;
			}
			case 2:{
				cout << "Pc: " << d << "\n\n";
								cout << "------------------------------------\n\n";
				if(a=="Scissor" || a=="scissor" || a=="Scissors" || a=="scissors"){
					Punti2++;
					cout << "\nPc: " << Punti2 << " Utente: " << Punti1 << "\n\n";
				}
				else if(a=="Rock" || a=="rock" ){
					cout << "\nPc: " << Punti2 << " Utente: " << Punti1 << "\n\n";
				}
				else {
					Punti1++;
					cout << "\nPc: " << Punti2 << " Utente: " << Punti1 << "\n\n";
				}
				break;
			}
			case 3:{
				cout << "Pc: " << e << "\n\n";
				cout << "------------------------------------\n";
				if(a=="Scissor" || a=="scissor" || a=="Scissors" || a=="scissors"){
					Punti1++;
					cout << "\nPc: " << Punti2 << " Utente: " << Punti1 << "\n\n";
				}
				else if(a=="Rock" || a=="rock" ){
					Punti2++;
					cout << "\nPc: " << Punti2 << " Utente: " << Punti1 << "\n\n";
				}
				else {
					cout << "\nPc: " << Punti2 << " Utente: " << Punti1 << "\n\n";
				}
				break;
			}
		}
	}
	if(Punti1=2){
		cout << "Vince il pc\n\n";
	}
	else{
		cout <<"Vince l'utente\n";
	}
	cout << "By Ivan Abrami\n\n";
	system("pause");
	return 0;
}
