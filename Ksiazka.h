#ifndef KSIAZKA_H
#define KSIAZKA_H

namespace Baza {
	class Ksiazka {

	private:
		int idKsiazki;
		String tytul;
		String autor;
		String gatunek;
		String statusDostepnosci;
		int rokWydania;
		String wydawnictwo;

	public:
		void zmienStatus();

		void czyDostepna();
	};
}

#endif
