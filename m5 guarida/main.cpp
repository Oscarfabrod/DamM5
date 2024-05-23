#include "EnemigoFinal.h"
#include "enemigo.h"
#include  <iostream>
int main() {
	int laberinto[10][5];

	Enemigo heroe = Enemigo(
		150, "Heroe", 20, 10
	);
	
	Enemigo duende = Enemigo(
		100, "Duende", 15, 5
	);
	Enemigo golem = Enemigo(
		150, "Golem", 10, 30
	);
	Enemigo slime = Enemigo(
		20, "slime", 5, 2
	);
	EnemigoFinal Minotauro = EnemigoFinal(
		300, "Minotauro", 25, 45, 20, 25
	);

	if (laberinto[2][4] == 1) {
		slime.pelear();
	}
	if (laberinto[2][2] == 1) {
		slime.pelear();
	}
	if (laberinto[3][1] == 1) {
		slime.pelear();
	}
	if (laberinto[3][2] == 1) {
		slime.pelear();
	}
	if (laberinto[3][3] == 1) {
		slime.pelear();
	}
	if (laberinto[3][4] == 1) {
		slime.pelear();
	}
	if (laberinto[3][5] == 1) {
		slime.pelear();
	}
	if (laberinto[4][3] == 2) {
		duende.pelear();
	}
	if (laberinto[4][4] == 2) {
		duende.pelear();
	}
	if (laberinto[4][1] == 2) {
		duende.pelear();
	}
	if (laberinto[5][5] == 2) {
		duende.pelear();
	}
	if (laberinto[5][3] == 2) {
		duende.pelear();
	}
	if (laberinto[5][4] == 2) {
		duende.pelear();
	}
	if (laberinto[6][3] == 3) {
		duende.pelear();
		duende.pelear();
	}
	if (laberinto[6][4] == 3) {
		duende.pelear();
		duende.pelear();
	}
	if (laberinto[7][1] == 4) {
		golem.pelear();

	}
	if (laberinto[7][2] == 4) {
		golem.pelear();

	}
	if (laberinto[7][3] == 4) {
		golem.pelear();

	}
	if (laberinto[7][4] == 4) {
		golem.pelear();

	}
	if (laberinto[7][5] == 4) {
		golem.pelear();

	}
	
	if (laberinto[8][3] == 5) {
		golem.pelear();
		duende.pelear();
		duende.pelear();
	}
	
	if (laberinto[8][5] == 5) {
		golem.pelear();
		duende.pelear();
		duende.pelear();
	}
	if (laberinto[9][5] == 6) {
		Minotauro.pelear();

	}
	if (laberinto[9][3] == 6) {
		Minotauro.pelear()
	}
	if (laberinto[9][1] == 6) {
		Minotauro.pelear()
	}
	if (laberinto[10][3] == 7) {
		cout << "Has ganado ";
	}
	while (!laberinto[10][3] )
	{
		laberinto[1][3] = 0;
		cout << "Para que direccion queres ir.";
		cin << movi;
		if (movi == "Arriba" )
		{
			cout << " No puedes ";

		} else if (movi == "Abajo")
		{
			laberinto[1][3] = laberinto[1 + 1][3 + 0];
		}
		else if(movi == "Derecha")
		{
			laberinto[1][3] = laberinto[1 + 0][3 + 1];
		}
		else if(movi == "Izquierda")
		{
			laberinto[1][3] = laberinto[1 + 0][3 - 1];
		}
		
	}


}
void Enemigo::pelea() {
	cout << "Has empezado una pelea! Ha parecido un " << name;
	while ((Heroe.hp == 0) || (Enemigo.hp == 0))
	{
		cout << "Le quieres pegar?";
		cin >> res;
		if (res == "Si")
		{
			Enemigo.hp = heroe.attack - Enemigo.hp;

		}
		else
		{
			cout << "No has atacado";
		}
		// Enemigo te ataca.
		Heroe.hp = Enemigo.attack - Heroe.hp;


	}

	// podemos dar una recompensa pero si he acabado todo lo demas.
	if (Enemigo.slime)
	{
		heroe.hp = heroe.hp + 10;
	}
	else if (Enemigo.duende)
	{
		heroe.attack = heroe.attack + 10;
	}
	else if (Enemigo.golem)
	{
		heroe.defense = heroe.defense + 10;
	}

}