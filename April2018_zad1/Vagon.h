#pragma once
#include<iostream>
using namespace std;

class Vagon
{
	int netoMasaVagonaUTonama;
	int maksimalniKapacitetVagona;
	int trenutnaPopunjenostVagona;
public:
	Vagon();
	Vagon(int netoMasaVagonaUTonama, int maksimalniKapacitetVagona, int trenutnaPopunjenostVagona);
	void prikaziNizVagona();
	int vratiOpterecenje();
};

