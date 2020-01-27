#ifndef UZYTKOWNIK_H
#define UZYTKOWNIK_H

class Uzytkownik : Osoba {

public:
	int idUzytkownika;

	void rezerwojKsiazke();

	void anulujRezerwacje();

	void prelongujKsiazke();
};

#endif
