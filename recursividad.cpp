#include <iostream>
#include <conio.h>

using namespace std;

int fibo (int);

int main(){
	
	int aux,n;
	
	cout<<"Ingrese cuantas series de fibonnaci quiere";
	cin>>aux;
	for(int i=0;i<aux;i++){
	n = fibo(i);
	cout<<n;
	}
	
	getch();
	return 0;
}

int fibo (int n){
	
	if(n<2){
		return n;
	}
	else{
		return fibo(n-1)+fibo(n-2);
	}
}
	
