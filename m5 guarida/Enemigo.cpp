#pragma once
#include "enemigo.h"
#include  <iostream>

	//constructor
Enemigo::Enemigo(int pHp, std::string pName, int pAttack, int pDefense) {
	hp = pHp;
	name = pName;
	attack = pAttack;
	defense = pDefense;
	}

	//getters
	int Enemigo::getHp() {
		return hp;
	}

	std::string Enemigo::getName() {
		return name;
	}

	int Enemigo::getAttack() {
		return attack;
	}

	int Enemigo::getDefense() {
		return defense;
	}


	//setters

	void Enemigo::setHp(int php) {
		hp = php;
	}

	void Enemigo::setName(std::string pname) {
		name = pname;
	}

	void Enemigo::setAttack(int pattack) {
		attack = pattack;
	}

	void Enemigo::setDefense( int pDefense) {
		defense = pDefense;
	}


	//Metodos propios

	void Enemigo::printStatus() {
		std::cout << "El nombre del enemigo es " << getName() << " y tiene una vida de  " << getHp() << std::endl;
 	}

	void Enemigo::pelea() {
		cout << "Has empezado una pelea! Ha parecido un " << name;
		while ((Heroe.hp == 0) || (Enemigo.hp == 0))
		{
			cout << "Le quieres pegar?";
			cin >> res;
			if (res == "Si")
			{
				Enemigo.hp =  heroe.attack - Enemigo.hp;

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
		} else if (Enemigo.duende)
		{
			heroe.attack = heroe.attack + 10;
		} else if (Enemigo.golem)
		{
			heroe.defense = heroe.defense + 10;
		}
	
	}