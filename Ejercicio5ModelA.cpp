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

void Uno (int x, int y, int n){
int i, j;
for (i = 0; i<n ; i++){
	for (j = 0; j<n ; j++){
		if (j == n/2 || i == n-1 || (i == 1 && j == n/2 - 1)){
			gotoxy (x+j , y+i);
			cout << "#";
		}
	}
}	
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

void Tres (int x, int y, int n){
int i, j;
for (i = 0; i<n ; i++){
	for (j = 0; j<n ; j++){
		if (i == 0 || j == n-1 || i == n/2 || i == n-1){
			gotoxy (x+j , y+i);
			cout << "#";
		}
	}
}	
}

void Cuatro (int x, int y, int n){
int i, j;
for (i = 0; i<n ; i++){
	for (j = 0; j<n ; j++){
		if (j == n-1 || i == n/2 || (j == 0 && i <= n/2)){
			gotoxy (x+j , y+i);
			cout << "#";
		}
	}
}	
}

void Cinco (int x, int y, int n){
int i, j;
for (i = 0; i<n ; i++){
	for (j = 0; j<n ; j++){
		if (i == 0 || (j == 0 && i <= n/2) || i == n/2 || (j == n-1 && i >= n/2) || i == n-1){
			gotoxy (x+j , y+i);
			cout << "#";
		}
	}
}	
}

void Seis (int x, int y, int n){
int i, j;
for (i = 0; i<n ; i++){
	for (j = 0; j<n ; j++){
		if (i == 0 || j == 0 || i == n/2 || (j == n-1 && i >= n/2) || i == n-1){
			gotoxy (x+j , y+i);
			cout << "#";
		}
	}
}	
}

void Siete (int x, int y, int n){
int i, j;
for (i = 0; i<n ; i++){
	for (j = 0; j<n ; j++){
		if (i == 0 || j == n-1){
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

void Nueve (int x, int y, int n){
int i, j;
for (i = 0; i<n ; i++){
	for (j = 0; j<n ; j++){
		if (i == 0 || (j == 0 && i <= n/2) || j == n-1 || i == n/2 || i == n-1){
			gotoxy (x+j , y+i);
			cout << "#";
		}
	}
}	
}

void dibujar(int d, int x, int y, int n){
    switch(d){
        case 0: Cero(x, y, n); break;
        case 1: Uno(x, y, n); break;
        case 2: Dos(x, y, n); break;
        case 3: Tres(x, y, n); break;
        case 4: Cuatro(x, y, n); break;
        case 5: Cinco(x, y, n); break;
        case 6: Seis(x, y, n); break;
        case 7: Siete(x, y, n); break;
        case 8: Ocho(x, y, n); break;
        case 9: Nueve(x, y, n); break;
    }
}

int main(){  
int n, anio1, anio2;

cout << "Ingresa el valor de las Filas (del 5 al 7 Para NxN): "; cin >> n;
while (n < 5 || n > 7){
	cout << "Error. Vuelvelo a intentar: Ingresa el valor de las Filas (Para NxN): "; cin >> n;
}

cout << "Ingresa tu ano de nacimiento (Integrante 1) (1950 a 2012): "; cin >> anio1;
while (anio1 < 1950 || anio1 > 2012){
	cout << "Error. Vuelvelo a intentar (1950 a 2012): "; cin >> anio1;
}

cout << "Ingresa tu ano de nacimiento (Integrante 2) (1950 a 2012): "; cin >> anio2;
while (anio2 < 1950 || anio2 > 2012){
	cout << "Error. Vuelvelo a intentar (1950 a 2012): "; cin >> anio2;
}

      dibujar(anio1 / 1000, 10, 3, n);
      dibujar((anio1 / 100) % 10, 20, 3, n);
      dibujar((anio1 / 10) % 10, 30, 3, n);
      dibujar(anio1 % 10, 40, 3, n);
      
      int posY = 3 + n + 3;
      dibujar(anio2 / 1000, 10, posY, n);
      dibujar((anio2 / 100) % 10, 20, posY, n);
      dibujar((anio2 / 10) % 10, 30, posY, n);
      dibujar(anio2 % 10, 40, posY, n);
      
      
      gotoxy(0, posY + n + 3);
      
      return 0;  
}
