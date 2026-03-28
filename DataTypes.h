class Korisnik{
	private:
    AnsiString hashirajLozinku(AnsiString lozinka):

	protected:
	int id;
	AnsiString ime, prezime, username, email, lozinkaHash;

	public:
	void setIme(AnsiString _ime);
	AnsiString getIme() const;

    Korisnik(){}
	Korisnik(int id, AnsiString ime, Ansistring prezime, AnsiString username, AnsiString email, AnsiString lozinka);
    bool prijava(AnsiString lozinka);

};

class Admin : protected Korisnik{
	private:
	int razina;

	public:
    Admin(){}
	Admin(int id, AnsiString ime, Ansistring prezime, AnsiString username, AnsiString email, AnsiString lozinka, int razina);
    void dodajFilm(Film* film);
	void obrisiKorisnika(int korisnikId);
};

class Film {
private:
    int id;
    AnsiString naslov;
    int godina;
    int trajanje;
    AnsiString opis;
    TBytes poster; // Blob - slika / postera

public:
    Film(int id, AnsiString naslov, int godina, int trajanje, AnsiString opis);
    float izracunajOcjenu();
    AnsiString dohvatiDetalje();
    void ucitajPoster(AnsiString putanja);
};


class Recenzija {
private:
    int id;
    AnsiString tekst;
	int ocjena;      // setter 1-10
	TDateTime datum;
    int filmId;      // FK prema Film
	int korisnikId;  // FK prema Korisnik

public:
    Recenzija(int filmId, int korisnikId, AnsiString tekst, int ocjena);
    bool validiraj();
    void spremi();
};


class Watchlista {
private:
    int id;
    AnsiString naziv;
    bool javna;
    TDateTime datumKreiranja;
    TList* filmovi; // lista filmova u watchlisti

public:
    Watchlista(int korisnikId, AnsiString naziv, bool javna);
    ~Watchlista(); // destruktor - oslobodi memoriju za filmovi
    void dodajFilm(Film* film);
    void ukloniFilm(int filmId);
    AnsiString izvezi(); // vraća JSON string
};
