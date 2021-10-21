#pragma once
#include <iostream>
#include <ctime>

using namespace std;
class Seleccionador
{
private:
	char opciones[3];
	char opcion;
	char opcionPC;
	int numeroRandom;
	bool opcionNoValida = true;
	string opcionExtendidaPC;
	string opcionesExtendidas[3];
public:
	void Lector();
};
void Seleccionador::Lector() {
	opciones[0] = 'p';
	opciones[1] = 'a';
	opciones[2] = 't';
	opcionesExtendidas[0] = "Piedra";
	opcionesExtendidas[1] = "Papel";
	opcionesExtendidas[2] = "Tijera";

	while (opcionNoValida)
	{
		cout << "Piedras papel o tijeras?(p/a/t)"<<endl;
		cin >> opcion;

		if (opcion == 'p' || opcion == 'a' || opcion == 't') {
			opcionNoValida = false;
		}
		else {
			cout << "opcion no valida intentelo nuevamente"<<endl;
		}
	}
	numeroRandom= round((rand() % 3));

	opcionPC = opciones[numeroRandom];
	opcionExtendidaPC = opcionesExtendidas[numeroRandom];

	cout << "El computador ha escogido: " << opcionExtendidaPC << endl;

	if (opcion ==opcionPC)
	{
		cout << "Empate!";
	}
	else if (opcion == 'p' && opcionPC == 'a') {
		cout << "Has perdido!";
	}
	else if (opcion == 'p' && opcionPC == 't') {
		cout << "Has ganado!";
	}
	else if (opcion == 'a' && opcionPC == 'p') {
		cout << "Has ganado!";
	}
	else if (opcion == 'a' && opcionPC == 't') {
		cout << "Has perdido!";
	}
	else if (opcion == 't' && opcionPC == 'p') {
		cout << "Has perdido!";
	}
	else if (opcion == 't' && opcionPC == 'a') {
		cout << "Has ganado!";
	}
}

