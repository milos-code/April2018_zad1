#include "Lokomotiva.h"

Lokomotiva::Lokomotiva()
{
	tipMotora = nullptr;
}

Lokomotiva::Lokomotiva(const char* tipMotora, double maksimalnaTezinaKojuMozeDaPovuce)
	:Vagon()
{
	this->tipMotora = tipMotora;
	this->makismalnaTezinaKojuMozeDaPovuce = maksimalnaTezinaKojuMozeDaPovuce;
}

void Lokomotiva::prikaziNizVagona()
{
	cout << "Lokomotiva sa tipom motora:" << tipMotora << " Maksimalna tezina koju moze da povuce:" << makismalnaTezinaKojuMozeDaPovuce << endl;
}

double Lokomotiva::vratiMaksimalnuTezinuKojuMozeDaPovuce()
{
	return makismalnaTezinaKojuMozeDaPovuce;
}

