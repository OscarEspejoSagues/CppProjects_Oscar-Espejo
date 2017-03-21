#include <iostream>
#include <string>
#include <ctime>
#include <conio.h>



class Fecha{
public:
	Fecha(int, int, int);
	void mostrarfecha();

private:
	int dia, mes, anio;
};

Fecha::Fecha(int _dia, int _mes, int _anio){
	anio = _anio;
	mes = _mes;
	dia = _dia;
}

void Fecha::mostrarfecha() {
	std::cout << "La fecha es " << dia << ' / ' << mes << ' / ' << anio;
}

void main() {
	Fecha Hoy(21, 3, 2017);

	Hoy.mostrarfecha();
}

