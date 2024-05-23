#pragma once
#include "Enemigo.h"
#include <iostream>

using namespace std;

class EnemigoFinal : public Enemigo
{
private:
	int fireAttack;
	int frozenAttack;

public:

	//CONSTRUCTOR CON ELEMENTOS DE LA CLASE PADRE Y PROPIA
	EnemigoFinal(int pHp,
				 std::string pName,
				 int pAttack,
				 int pShield,
				 bool pFireAttack,
				 int pFrozenAttack);

	//GETTERS AND SETTERS
	int getFireAttack();
	int getFrozenAttack();

	void setFireAttack(int pFireAttack);
	void setFrozenAttack(int pFrozenAttack);

	//METODOS PROPIOS
	void printAllStats();


};

