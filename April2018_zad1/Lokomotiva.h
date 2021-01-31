#pragma once
#include"Vagon.h"

class Lokomotiva:public Vagon
{
protected:
	const char* tipMotora;
	double makismalnaTezinaKojuMozeDaPovuce;
public:
	Lokomotiva();
	Lokomotiva(const char* tipMotora, double maksimalnaTezinaKojuMozeDaPovuce);

	void prikaziNizVagona();
	double vratiMaksimalnuTezinuKojuMozeDaPovuce();
};

