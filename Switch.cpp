#include <iostream>

using namespace std;

int main (){
	
	char entr;
	
	cout<<"Ingrese una letra: ";
	cin>>entr;
	
	switch (entr){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':cout<<"Es una vocal minuscula";break;
		case 'A':
		case 'B':
		case 'C':
		case 'D':
		case 'E':cout<<"Es una vocal Mayuscula";break;
		default:cout<<"No es una vocal";break;
	}
	
	return 0;
}
