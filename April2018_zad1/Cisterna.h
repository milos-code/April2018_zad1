#pragma once
#include"Vagon.h"
class Cisterna:public Vagon
{
	double gustinaMaterijalaUCisterni;
public:
	Cisterna();
	Cisterna(int netoMasaCisterne, int maksimalniKapacitetCisterneUKubnimMetrima, int trenutnaPopunjenostCisterneUKubnimMetrima, double gustinaMaterijalaUCisterni);

	void prikaziNizVagona();
};

