#pragma once
#include "Vagon.h"
class TeretniVagon:public Vagon
{
public:
	TeretniVagon();
	TeretniVagon(int netoMasaTeretnogVagona, int makismalnaNosivostTeretnogVagonaUKilogramima, int trenutnaPopunjenostTeretnogVagona);

	void prikaziNizVagona();
};

