#include "TeretniVagon.h"

TeretniVagon::TeretniVagon()
	:Vagon()
{
}

TeretniVagon::TeretniVagon(int netoMasaTeretnogVagona, int makismalnaNosivostTeretnogVagonaUKilogramima, int trenutnaPopunjenostTeretnogVagona)
	:Vagon(netoMasaTeretnogVagona, makismalnaNosivostTeretnogVagonaUKilogramima, trenutnaPopunjenostTeretnogVagona)
{
}

void TeretniVagon::prikaziNizVagona()
{

	cout << "Teretni vagon: ";
	Vagon::prikaziNizVagona();
}
