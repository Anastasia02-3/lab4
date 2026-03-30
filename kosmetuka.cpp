#include "kosmetyka.h"

int Kosmetyka::setNazva(string n) { nazva = n; return 1; }
int Kosmetyka::setBrend(string b) { brend = b; return 1; }
int Kosmetyka::setTsina(double t) { tsina = t; return 1; }
int Kosmetyka::pokazaty() { cout << "Kosmetychnyi virib"; return 1; }
int Kosmetyka::opysTovaru() { 
    cout << "[" << brend << "] " << nazva << " - " << tsina << " grn. "; 
    return 1; 
}

Doglyad::Doglyad() {
    this->setNazva("Universal zasib");
    this->setBrend("Natura");
    this->setTsina(150.0);
    this->setTypShkiry("usy typy");
    this->opysTovaru(); 
    this->pokazaty();
}
int Doglyad::setTypShkiry(string typ) { typShkiry = typ; return 1; }
int Doglyad::pokazaty() { cout << "Typ shkiry: " << typShkiry << "\n"; return 1; }

KremDlyaOblychchya::KremDlyaOblychchya() { spf = 0; }
KremDlyaOblychchya::KremDlyaOblychchya(int s) {
    this->setNazva("Krem dlya oblychchya");
    this->setBrend("Vichy");
    this->setTsina(320.0);
    this->setSPF(s);
    this->opysTovaru();
    cout << " (SPF: " << spf << ")\n";
}
int KremDlyaOblychchya::setSPF(int s) { spf = s; return 1; }

NichnyiKrem::NichnyiKrem(int s, string komponenty) {
    this->setNazva("Nichnyi krem");
    this->setBrend("L'Oreal");
    this->setTsina(480.0);
    this->setSPF(s);
    this->aktyvniKomponenty = komponenty;
    this->opysTovaru();
    cout << "\nSklad: " << aktyvniKomponenty << " (SPF " << spf << ")\n";
}

Pomada::Pomada() {
    this->setNazva("Pomada");
    this->setBrend("MAC");
    this->setTsina(550.0);
    this->setKolir("chervonyi");
    this->opysTovaru();
    this->pokazaty();
}
int Pomada::setKolir(string k) { kolir = k; return 1; }
int Pomada::pokazaty() { cout << "Kolir: " << kolir << "\n"; return 1; }