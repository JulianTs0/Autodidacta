#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

struct persona {
	char nombre[10];
	bool discap;
}pers[100];

struct discap {
	char nombre[10];
}discap[100];

struct undiscap {
	char nombre[10];
}undiscap[100];

int main (){
	
	int aux,i;
	char aux1[10];
	
	cout<<"A cuantas personas quiere mostrar?";
	cin>>aux;
	
	for(i=0;i<aux;i++){
		fflush(stdin);
		cout<<"Cual es su nombre ?";
		cin.getline(pers[i].nombre,10,'\n');
		cout<<"Sufre de alguna discapacidad?";
		cin.getline(aux1,10,'\n');
		strlwr(aux1);
		if(strcmp(aux1,"si") == 0){
			pers[i].discap = true;
		} else if(strcmp(aux1,"no") == 0){
			pers[i].discap = false;
		} else {
			strcpy(pers[i].nombre," ");
			pers[i].discap = false;
			cout<<"Tiene que responder con si o no";
			fflush(stdin);
			i--;
		}
	}
	
	for(i=0;i<aux;i++){
		if(pers[i].discap){
			strcpy(discap[i].nombre,pers[i].nombre);
		} 
	} for(i=0;i<aux;i++){
		if(pers[i].discap == false){
			strcpy(undiscap[i].nombre,pers[i].nombre);
		} 
	}
		cout<<"Estas son las personas con discapacidad \n";
	for(i=0;i<aux;i++){
		cout<<discap[i].nombre;
		cout<<"\n";
	}
		cout<<"\n Y estas sin discapacidad \n";
	for(i=0;i<aux;i++){
		cout<<undiscap[i].nombre;
		cout<<"\n";
	}
	getch();
	return 0;
}
	
