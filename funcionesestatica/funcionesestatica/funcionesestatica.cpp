// funcionesestatica.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//


using namespace std;
#include <iostream>
// MathLibrary.cpp
// compile with: cl /c /EHsc MathLibrary.cpp
// post-build command: lib MathLibrary.obj

#include "funcionesestatica.h"
#include <string>

namespace RecetasFuncion
{
    void Arithmetic::ingredientes(string ingre, string ingreopcio)
    {
        cout << " Queres ver los ingredientes principales?\n";
        cin >> ingre;
        if (ingre == "Si")
        {
            cout << " Los Ingrecientes son: \n";
            cout << " Huevos\n";
            cout << " Patata\n";
            cout << " Carne\n";
            cout << " Tomate\n";
            cout << " Pollo\n";
            cout << " Brocoli\n";
            cout << " Calabaza\n";
        }
        else {
            cout << " Pues no veras los ingredientes.\n";
        
        }


        cout << " Queres ver los ingredientes opcionales?\n";
        cin >> ingreopcio;
        if (ingreopcio == "Si")
        {
            cout << " Los Ingrecientes opcionales son: \n";
            cout << " Ketchup\n";
            cout << " Helado\n";
            cout << " Chocolote\n";
            cout << " Calabazin\n";
            cout << " Gamba\n";
            cout << " Arroz\n";
            cout << " Naranja\n";
        }
        else {
            cout << "  Pues tendras que aduvinarlos.\n";

        }
        
    }

    void Arithmetic::recetas(string receingre, string receopcio)
    {
        cout << " Cual de los ingredientes principales quieres en tu receta?\n";
        cin >> receingre;
        cout << " Cual de estos ingredientes opcionales quieres que aparezcan en tu receta?\n";
        cin >> receopcio;

        if (receingre == "Patata")
        {
            cout << "La receta con patata son las patatas fritas hay que hacerlas finitas y despues freirlas.\n";
        }
        else if ((receingre == "Huevos") && (receopcio == "Arroz"))
        {
            cout << "La receta de huevo frito con arroz es opcional agregarle si quieres bacon.\n";
        }
        else if ((receingre == "Calabaza") && (receopcio == "Calabazin"))
        {
            cout << "La receta con estos ingredientes es para hacer una sopa de verduras.\n";
        }
        else if (receingre == "Carne")
        {
            cout << "La receta con carne seria la carne rebozada que se se tiene que freir\n";
        }
        else {
            cout << "Aun no existe una receta con estos ingredientes\n";
        
        }








        
    }

   
}

int main()
{
    
    string ingre = "Si";
    string ingreopcio = "Si";

    string receingre = "Huevos";
    string receopcio = "Arroz";

    
        RecetasFuncion::Arithmetic::ingredientes(ingre, ingreopcio);
    
        RecetasFuncion::Arithmetic::recetas(receingre, receopcio);
  

    return 0;
}
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
