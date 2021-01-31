#include "Vagon.h"

Vagon::Vagon()
{
	this->netoMasaVagonaUTonama = 0;
	this->maksimalniKapacitetVagona = 0;
	this->trenutnaPopunjenostVagona = 0;
}

Vagon::Vagon(int netoMasaVagonaUTonama, int maksimalniKapacitetVagona, int trenutnaPopunjenostVagona)
{
	this->netoMasaVagonaUTonama = netoMasaVagonaUTonama;
	this->maksimalniKapacitetVagona = maksimalniKapacitetVagona;
	this->trenutnaPopunjenostVagona = trenutnaPopunjenostVagona;
}

void Vagon::prikaziNizVagona()
{
	cout << "Neto masa vagona:" << netoMasaVagonaUTonama << " maksimalni kapacitet vagona:" << maksimalniKapacitetVagona << " trenutna popunjenost vagona:" << trenutnaPopunjenostVagona << endl;
}

int Vagon::vratiOpterecenje()
{
	return netoMasaVagonaUTonama + trenutnaPopunjenostVagona;
}
