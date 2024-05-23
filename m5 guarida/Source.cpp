#include <iostream>
#include "Enemigo.h"
#include "EnemigoFinal.h"

int main() {

	//CREAMOS UN ENEMIGO NORMAL
	Enemigo goomba(50, "Goomba", 50, 300);

	//CREAMOS UN ENEMIGO FINAL QUE HEREDA DE ENEMIGO
	EnemigoFinal kingBowser(1000, "Bowser", 500, 200, 1000, 800);

	//PROBAMOS LOS MÉTODOS PROPIOS
	goomba.printStatus();
	kingBowser.printAllStats();
	
	return 0;
}