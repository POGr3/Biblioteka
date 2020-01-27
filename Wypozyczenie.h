#ifndef WYPOZYCZENIE_H
#define WYPOZYCZENIE_H

class Wypozyczenie {

private:
	Data dataWypozyczenia;
	Data dataZwrotu;
	float oplata;

public:
	void wypozycz();

	void zwroc();

	void prelonguj();
};

#endif
