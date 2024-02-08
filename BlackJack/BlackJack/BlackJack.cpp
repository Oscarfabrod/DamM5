// BlackJack.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>

int totalcroupier;
int totalusuario;
int num;
int num1;
int num2;
int corazon[13] = { 1,2,3,4,5,6,7,8,9, 10, 10,10,10 };
int picas[13] = { 1,2,3,4,5,6,7,8,9, 10, 10,10,10 };
int trevoles[13] = { 1,2,3,4,5,6,7,8,9, 10, 10,10,10 };
int diamantes[13] = { 1,2,3,4,5,6,7,8,9, 10, 10,10,10 };
using namespace std;


void enfrentamiento() {
    if (totalusuario == totalcroupier)
    {
       cout << "El jugador empata.";
    }
    else if ((totalusuario < totalcroupier) && (totalusuario > 21)) {
        cout << "El jugador pierde.";
    
    }
    else {
        cout << "El jugador gana enorabuena.";
    
    }



}

void check(int carta ) {
    if (totalcroupier + 11 > 21) {
        totalcroupier += 1;
    }
    else {
        totalcroupier += 11;
    }

}
void croupier() {
    int carta = 0;
    while (totalcroupier <= 21) {
        num = rand() % 4;
        switch (num)
        {
        case 0: 
           carta = corazon[rand() % 13];
           cout << carta << " Carta corazon \n";
            break;
        case 1: 
            carta = picas[rand() % 13];
            cout << carta << " Carta picas\n";
            break;
        case 2:
            carta = trevoles[rand() % 13];
            cout << carta << " Carta trevoles\n";
            break;
        case 3: 
            carta = diamantes[rand() % 13];
            cout << carta << " Carta diamantes\n";
            break;
        default:cout << "El numero no es el que toca";
            break;
        }

        if (carta == 1) {
            check(carta);
        }
        else {
            totalcroupier += carta;
        }        
    }
    




}
void jugador() {
    string opcionjugador;
    
    cout << " Queres otra carta?\n";
    cin >> opcionjugador;

    bool otraCarta = false;
    do {

    
         num1 = rand() % 4;
    switch (num1)
    {
    case 0: num2 = corazon[rand() % 13];
        cout << num2 << " Carta corazon \n";
        break;
    case 1: num2 = picas[rand() % 13];
        cout << num2 << " Carta picas \n";
        break;
    case 2: num2 = trevoles[rand() % 13];
        cout << num2 << " Carta trevoles \n";
        break;
    case 3: num2 = diamantes[rand() % 13];
        cout << num2 << " Carta diamantes \n";
        break;
  
    }
    int uno;
    if (num2 == 1)
    {
        cout << "Quieres que el uno se convierta en 1 o 11?";
        cin >> uno;
        if (uno == 1)
        {
            num2 += 1;
        }
        else {
            num2 += 11;
        
        }

    }

       totalusuario = num + num2;
       cout << "Queres otra carta?";
       cin >> opcionjugador;
       cout << "El valor total es: " << totalusuario << "\n";
       if (opcionjugador == "Si" || opcionjugador == "si") {
           otraCarta = true;
       }
       else {
           otraCarta = false;
       }

    } while (otraCarta);

    

}
void baraja() {
    

    num = rand() % 4;
    switch (num)
    {
    case 0: num = corazon[rand()% 13];
        cout << num << "Carta corazon";
        break;
    case 1: num = picas[rand() % 13];
        cout << num << "Carta picas";
        break;
    case 2: num = trevoles[rand() % 13];
        cout << num << "Carta trevoles";
        break;
    case 3: num = diamantes[rand() % 13];
        cout << num << "Carta diamantes";
        break;

    }


}
int main()
{
    srand(time(NULL));
    baraja();
    jugador();
    croupier();
    enfrentamiento();
   

    
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
