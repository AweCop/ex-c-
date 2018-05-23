//this program exchanges the values of the matrix by rows and columns
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	int tris[3][3]={ {1,2,3} ,
					 {4,5,6} ,
					 {7,8,9} };
	for(int r=0;r<3;r++){
		for(int c=0;c<3;c++){
			cout << tris[r][c] << " ";
		}
		cout << endl;
	}
	cout << "---------------------------------------\n";
	for(int r=0;r<3;r++){
		for(int c=2;c>=0;c--){
			cout << tris[r][c] << " ";
		}
		cout << endl;
	}
	cout << "---------------------------------------\n";
	for(int r=2;r>=0;r--){
		for(int c=0;c<3;c++){
			cout << tris[r][c] << " ";
		}
		cout << endl;
	}
	return 0; 
}
