#include<iostream>
#include<conio.h>
#include <windows.h>
#include <winuser.h>

using namespace std;

int main(){

	int x,y;
	bool u = true,d = true,t = true;
	
	while (u){
		 
		
		Sleep(1000); // parar la simulacion por esos segundos
		system("cls");
		POINT cursor;
		
		GetCursorPos(&cursor); //Obetner la pos del cursor en la variable cursor
		
		x = cursor.x;
		y = cursor.y;
		
		cout<<"\r X : "<<x<<", Y :"<<y<<"\n";	
		
		if( GetAsyncKeyState(0x53)){
			u = false;
			system("cls");
		}
	}	
	
	while(d){
		
		if( GetAsyncKeyState(0x53)){
			d = false;
		}
		
		Sleep(5000);
		
		SetCursorPos(652,325); //Asigna el cursor en tal posicion
		
		mouse_event(MOUSEEVENTF_RIGHTDOWN,x,y,0,0); //Simnular un click izquierdo
		
		
		
	}
	
	while(t){
		if(GetAsyncKeyState(0x08)){
			t = false;
		} 
		Sleep(1000);
		keybd_event(0x08,0,0,0);
	}
	getch();
	return 0;
}
