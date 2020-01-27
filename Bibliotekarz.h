#ifndef BIBLIOTEKARZ_H
#define BIBLIOTEKARZ_H

class Bibliotekarz : Uzytkownik, Osoba {

private:
	int idBibliotekarz;
	String nazwa;

public:
	void dodajUzytkownika();

	void usunUzytkownika();
};

#endif
