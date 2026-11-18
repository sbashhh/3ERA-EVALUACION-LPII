#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
}  

void Dos (int x, int y, int n){
int i, j;

for (i = 0; i<n ; i++){
	
	for (j = 0; j<n ; j++){
		
		if (i == 0 || j == n-1 && i<=n/2 || (i == n/2) ||j == 0 && i>=n/2 || i == n-1){
			gotoxy (x+j , y+i);
			cout << "#";
		}
	}
}	
}

void Cero (int x, int y, int n){
	
int i, j;

for (i = 0; i<n ; i++){
	
	for (j = 0; j<n ; j++){
		
		if (i == 0 || j == n-1||j == 0 || i == n-1){
			gotoxy (x+j , y+i);
			cout << "#";
		}
	}
}	
}

void Ocho (int x, int y, int n){
	
int i, j;

for (i = 0; i<n ; i++){
	
	for (j = 0; j<n ; j++){
		
		if (i == 0 || j == n-1||j == 0 || i == n-1 || i == n / 2){
			gotoxy (x+j , y+i);
			cout << "#";
		}
	}
}	
}

int main(){  
int n;

cout << "Ingresa el valor de las Filas (Para NxN): "; cin >> n;
while (n < 5 || n > 7){
	cout << "Error. Vuelvelo a intentar: Ingresa el valor de las Filas (Para NxN): "; cin >> n;
}

      Dos(10, 3, n);
      Cero(20, 3, n);
      Cero(30, 3, n);
      Ocho(40, 3, n);
      
      Dos(70, 3, n);
      Cero(80, 3, n);
      Cero(90, 3, n);
      Ocho(100, 3, n);
      return 0;  
 }  
