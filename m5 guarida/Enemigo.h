#pragma once
#include  <iostream>
class Enemigo
{

private:
	int hp;
	std::string name;
	int attack;
	int defense;

public:
	//constructor
	Enemigo(int pHp, std::string pName, int pAttack, int pDefense);
	//getters
	int getHp();

	std::string getName();

	int getAttack();

	int getDefense();

	//setters

	void setHp(int php);

	void setName(std::string pname);

	void setAttack(int pattack);

	void setDefense(int pDefense);

	//metodos propios

	void printStatus();
	void pelea();

};

