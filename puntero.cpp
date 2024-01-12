#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	
	int n,*dir,prim[7] = {2,3,5,6,7,11,13},aux;
	
	cout<<"Digite un numero para saber si es primo o no";
	cin>>n;
	
	dir = &n;
	
	for(int i=0;i<7;i++){
		if (*dir % prim[i] != 0){
			aux++;
		} else if (*dir == prim[i]){
			aux = 7;
			break;
		}else {
			aux = -1;
		}
	}
	
	if(aux == 7){
		cout<<"El numero que digito es primo\n";
		cout<<"Y la direccion de memoria es: "<<dir;
	} else {
		cout<<"El numero que digito no es primo\n";
	}
	
	
	getch();
	return 0;
}
