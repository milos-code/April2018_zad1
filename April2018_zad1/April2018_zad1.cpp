#include <iostream>
#include"Kompozicija.h"
#include"Vagon.h"
#include"PutnickiVagon.h"
#include"Cisterna.h"
#include"Lokomotiva.h"
#include"TeretniVagon.h"

int main()
{
	Kompozicija** kompozicija = new Kompozicija * [6];

	kompozicija[0]->dodajVagon(new Lokomotiva("Dizel 2000", 1000));
	kompozicija[1]->dodajVagon(new PutnickiVagon(10, 100, 10));
	kompozicija[2]->dodajVagon(new PutnickiVagon(10, 200, 50));
	kompozicija[3]->dodajVagon(new TeretniVagon(10, 10000, 560));
	kompozicija[4]->dodajVagon(new Cisterna(1, 100, 6, 14.55));
	kompozicija[5]->dodajVagon(new TeretniVagon(10, 100, 10));

	for (int i = 0; i < 6; i++)
	{
		kompozicija[i]->prikaziStepenIskoriscenostiVagona(kompozicija[0]);
		kompozicija[i]->prikaziNizVagona();
	}
	
}