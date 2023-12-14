// Videojuego.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <windows.h>
#include <mmsystem.h>
 using namespace std;
 void nombreheroe() {

     int characterHp = 100;
     int characterAtk;
     int characterAtkPatada = 40;
     int characterAtkMagia;
     int characterAtkPuno = 15;
     int usosveces = 3;

     string characterName;
     bool lifeHero = true;

     int bossHp1 = 200;
     int bossAtk1;
     string bossName1 = "Alex Salla";
     int bossHp2 = 70;
     int bossAtk2;
     string bossName2 = "Alex el capo";
     bool lifeBoss1 = true;
     bool lifeBoos2 = true;


 }

 int elegirenemigo() {
     int opcEnemigo;
     cout << "Que enemigos quieres atacar? \n ";
     cin >> opcEnemigo;
     return opcEnemigo;


 }
 void elegirmovimiento() {
     int opcAtk;
     cout << "Como quieres atacar? \n ";
     cin >> opcAtk;



 }
 bool horaatk(int bossHp1, int bossHp2, int characterHp, int characterAtk , 
     int bossAtk1, int bossAtk2, int characterAtkMagia, int characterAtkPuno, 
     int usosveces, int characterAtkPatada, string bossName1, string bossName2) {

     while ((bossHp1 > 0 || bossHp2 > 0) && characterHp > 0)
     {
         //To calculate attacks
         characterAtk = rand() % 11;

         bossAtk1 = rand() % 21;
         bossAtk2 = rand() % 11;
         characterAtkMagia = rand() % (41 - 25);


         //Atack

         if (bossHp1 < 0)
         {
             bossHp1 = 0;
         }

         int opcAtk = 0;

         int enemigo = elegirenemigo();



         elegirmovimiento();
         int opcEnemigo = 0;
         cout << "Que enemigos quieres atacar? \n ";
         cin >> opcEnemigo;

         cout << "Como quieres atacar? \n ";
         cin >> opcAtk;
         if (opcAtk == 1) {
             characterAtk = characterAtkPuno;

         }
         else if (opcAtk == 2 && usosveces > 0) {
             characterAtk = characterAtkPatada;
             usosveces = usosveces - 1;

         }
         else if (opcAtk == 3) {
             characterAtk = characterAtkMagia;

         }
         else {
             characterAtk = 0;
         }

         if (opcEnemigo == 1) {

             bossHp1 = bossHp1 - characterAtk;
             cout << "Has atacado al enemigo con " << characterAtk << " de ataque y le quedan " << bossHp1 << " \n";
         }
         else {
             bossHp2 = bossHp2 - characterAtk;
             cout << "Has atacado al enemigo con " << characterAtk << " de ataque y le quedan " << bossHp2 << " \n";


         }
         if (usosveces == 0)
         {
             cout << "Has utilizado este movimiento las veces que se pueden utilizar";

         }


         if (bossHp1 < 0)
         {
             bossHp1 = 0;
             cout << "El enemigo a llegado a 0";
         }

         if (bossHp2 < 0)
         {
             bossHp2 = 0;
             cout << "El enemigo a llegado a 0";
         }

         if (bossHp1 <= 0 && bossHp2 <=0 )
         {
             cout << " Te has cargado a " << bossName1 << "\n";
             cout << " El enemigo le quedan 0 de vida.";
             cout << " Te has cargado a " << bossName2 << "\n";
             cout << " El enemigo le quedan 0 de vida.";
         }
         else {
             characterHp = characterHp - bossAtk1;
             cout << " El enemigo te ha atacado con " << bossAtk1 << " de ataque y te quedan " << characterHp;

             if (characterHp <= 0)
             {
                 cout << "\nGame Over";

             }
             if (bossHp1 <= 0)
             {

             }

         }
     }
     
     if (characterHp <= 0) {
         return false;
     }
     else {
         return true;
     }

 }


int main()
{

    nombreheroe();
   // elegirenemigo();
   // elegirmovimiento();
    srand(time(NULL));
    bool isHeroAlive = horaatk(int bossHp1, int bossHp2, int characterHp, int characterAtk,
        int bossAtk1, int bossAtk2, int characterAtkMagia, int characterAtkPuno,
        int usosveces, int characterAtkPatada, string bossName1, string bossName2);
    
    if (isHeroAlive) {
        cout << "Has ganado la partida\n";
    }
    else {
        cout << "No sabes jugar\n";
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
