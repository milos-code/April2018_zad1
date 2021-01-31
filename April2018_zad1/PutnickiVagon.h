#pragma once
#include "Vagon.h"
class PutnickiVagon :public Vagon
{	
public:
	PutnickiVagon();
	PutnickiVagon(int netoMasaPutnickogVagona, int makismalniKapacitetPutnickogVagonaKaoBrojPutnika, int trenutnaPopunjenostPutnickogVagona);

	void prikaziNizVagona();
};

