#include "Kompozicija.h"

Kompozicija::Kompozicija()
{
	nizVagona = nullptr;
}

void Kompozicija::dodajVagon(Vagon* vagon)
{
	Vagon** noviVagoni = new Vagon*[this->trenutnoVagona + 1];

	Vagon** stariVagoni = this->nizVagona;

	for (int i = 0; i < this->trenutnoVagona; i++)
	{
		noviVagoni[i] = this->nizVagona[i];
	}

	noviVagoni[trenutnoVagona] = vagon;
	
	this->trenutnoVagona++;

	this->nizVagona = noviVagoni;

	delete[] stariVagoni;
}

void Kompozicija::prikaziNizVagona()
{
	cout << "Trenutan broj vagona: " << trenutnoVagona << endl;
}

void Kompozicija::prikaziStepenIskoriscenostiVagona(Kompozicija* lok)
{
	int ukupnoOpterecenje = 0;
	for (int i = 0; i < trenutnoVagona; i++)
	{
		ukupnoOpterecenje += this->nizVagona[i]->vratiOpterecenje();
	}
	double stepenIskoriscenja = lok->vratiMaksimalnuTezinuKojuMozeDaPovuce() / ukupnoOpterecenje;

	cout << stepenIskoriscenja;
}

void Kompozicija::izbaciNajopterecenijiVagon()
{
	if (trenutnoVagona == 0)
	{
		return;
	}

	Vagon** noviNizVagona = new Vagon*[trenutnoVagona - 1];

	Vagon** stariNizVagona = this->nizVagona;

	int k = 0;

	Vagon* maksimalnoOpterecenje = this->nizVagona[0];
	for (int i = 1; i < trenutnoVagona; i++)
	{
		if (nizVagona[i]->vratiOpterecenje() > maksimalnoOpterecenje->vratiOpterecenje())
		{
			Vagon* pomocna = nizVagona[i];
			nizVagona[i] = maksimalnoOpterecenje;
			maksimalnoOpterecenje = pomocna;
		}
		noviNizVagona[k++] = this->nizVagona[i];
	}
	trenutnoVagona--;

	this->nizVagona = noviNizVagona;

	delete[] stariNizVagona;
}
