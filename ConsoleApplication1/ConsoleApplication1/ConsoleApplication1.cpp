// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Enemigo.h"
using namespace std;


int main()
{
    Enemigo enemigo1 = Enemigo(0, 0, "Javi", 1);
    Enemigo enemigo2 = Enemigo(0, 0, "Adri", 1);
    srand(time(NULL));
 

    enemigo1.getParametes();
    enemigo2.getParametes();

    if (enemigo1.getDistancia_recorrida() > enemigo2.getDistancia_recorrida())
    {
        cout << "Eres el ganador";
    }
    else if (enemigo1.getDistancia_recorrida() < enemigo2.getDistancia_recorrida())
    {
        cout << "Eres el perdedor";
    }
    else
    {
        cout << "Hay un empate";
    }




}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
