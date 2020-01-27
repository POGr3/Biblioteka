#ifndef KONTO_H
#define KONTO_H

class Konto {

private:
	String statusKonta;
	Wypozyczenie historiaWypozyczen;
	Platnosci historiaPlatnosci;

public:
	void archiwizujWypozyczenie();

	void liczNaleznosc();

	void zaplac();

	void archiwizujPlatnosc();

	void dodajRezerwacje();

	void dodajWypozyczenie();

	void pokazSzczegoly();
};

#endif
