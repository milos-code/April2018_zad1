#include "PutnickiVagon.h"

PutnickiVagon::PutnickiVagon()
	:Vagon()
{
}

PutnickiVagon::PutnickiVagon(int netoMasaPutnickogVagona, int makismalniKapacitetPutnickogVagonaKaoBrojPutnika, int trenutnaPopunjenostPutnickogVagona)
	:Vagon(netoMasaPutnickogVagona, makismalniKapacitetPutnickogVagonaKaoBrojPutnika, trenutnaPopunjenostPutnickogVagona)
{
}

void PutnickiVagon::prikaziNizVagona()
{
	cout << "Putnicki vagon: ";
	Vagon::prikaziNizVagona();
}
