#include "Cisterna.h"

Cisterna::Cisterna()
	:Vagon()
{
	this->gustinaMaterijalaUCisterni = 0;
}

Cisterna::Cisterna(int netoMasaCisterne, int maksimalniKapacitetCisterneUKubnimMetrima, int trenutnaPopunjenostCisterneUKubnimMetrima, double gustinaMaterijalaUCisterni)
	:Vagon(netoMasaCisterne, maksimalniKapacitetCisterneUKubnimMetrima, trenutnaPopunjenostCisterneUKubnimMetrima)
{
	this->gustinaMaterijalaUCisterni = gustinaMaterijalaUCisterni;
}

void Cisterna::prikaziNizVagona()
{

	cout << "Cisterna: ";
	Vagon::prikaziNizVagona();
	cout << "gustina materijala u cisterni je: " << gustinaMaterijalaUCisterni << endl;
}
