#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	
	int matriz [3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int filas = 3, columnas = 3;
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			if(i==j){
				cout<<matriz [i][j];
			} else {
				cout<<" ";
			}
			
		}
	}
	
	
	
	
	getch();
	return 0;
}
