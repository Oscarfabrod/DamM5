#include "Enemigo.h"
int Enemigo::getVelocidad() {
	return velocidad;

}
void Enemigo::setVelocidad(int pvelocidad) {
	velocidad = pvelocidad;

}
int Enemigo::getDistancia_recorrida() {
	return distancia_recorrida;

}

void Enemigo::setDistancia_recorrida(int pdistancia_recorrida)
{
	distancia_recorrida = distancia_recorrida + velocidad * 100;
}

string Enemigo::getName() {
	return Name;

}
void Enemigo::setName(string hname) {
	Name = hname;

}
int Enemigo::getNitro() {
	return nitro;

}
void Enemigo::setNitro(int nitro = 1) {
	string res;
	cout << "Quieres utilizar la nitro? ";
	cin >> res;
	if (res == "Si")
	{
		nitro = rand() % 2;
			if (nitro == 1)
			{
				velocidad = velocidad * 2;
				nitro = 0;
			}
			else {
				velocidad = velocidad / 2;
				nitro = 0;
			}
	}
	
	

}
int Enemigo::getParametes() {
	int turno = 6;
	for (int i = 1; i < turno; i++)
	{
		
		velocidad = velocidad +  rand() % 6;
		cout << "Este es la velocidad" << velocidad;
		string res;
		cout << "Quieres utilizar la nitro? ";
		cin >> res;
		if (res == "Si")
		{
			nitro = rand() % 2;
			if (nitro == 1)
			{
				velocidad = velocidad * 2;
				nitro = 0;
			}
			else {
				velocidad = velocidad / 2;
				nitro = 0;
			}
		}
	}

	return velocidad;
	

}

Enemigo::Enemigo(){}
Enemigo::Enemigo(int pvelocidad, int pdistancia_recorrida, string pName, int pnitro) {
	velocidad = pvelocidad;
	distancia_recorrida = pdistancia_recorrida;
	Name = pName;
	nitro = pnitro;

}