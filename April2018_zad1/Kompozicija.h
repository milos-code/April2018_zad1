#pragma once
#include"Vagon.h"
#include"Lokomotiva.h"
class Kompozicija
{
	Vagon** nizVagona;
	int trenutnoVagona;
public:
	Kompozicija();

	void dodajVagon(Vagon* vagon);
	virtual void prikaziNizVagona() = 0;
	void prikaziStepenIskoriscenostiVagona(Kompozicija* lok);
	void izbaciNajopterecenijiVagon();
	virtual double vratiMaksimalnuTezinuKojuMozeDaPovuce() = 0;
};

