#pragma once
#include <iostream>
using namespace std;
class Enemigo
{
private:
	int velocidad;
	int distancia_recorrida;
	string Name;
	int nitro;

public:
	int getVelocidad(); 
	void setVelocidad(int pvelocidad);
	int getDistancia_recorrida();
	void setDistancia_recorrida(int pdistancia_recorrida);
	string getName();
	void setName(string hname);
	int getNitro();
	void setNitro( int nitro);
	int getParametes();
	Enemigo();
	Enemigo(int pvelocidad, int pdistancia_recorrida, string pName, int pnitro);
};

