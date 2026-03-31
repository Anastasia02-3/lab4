#include "kosmetyka.h"

Kosmetyka::Kosmetyka() {
    nazva = "Unknown";
    brend = "Unknown";
    tsina = 0;
}

Kosmetyka::Kosmetyka(std::string n, std::string b, double t) {
    nazva = n;
    brend = b;
    tsina = t;
}

int Kosmetyka::setNazva(std::string n) { nazva = n; return 1; }
int Kosmetyka::setBrend(std::string b) { brend = b; return 1; }
int Kosmetyka::setTsina(double t) { tsina = t; return 1; }

double Kosmetyka::F(int x) {
    std::cout << "F(int) called\n";
    return x * 2;
}

double Kosmetyka::F(double x) {
    std::cout << "F(double) called\n";
    return x / 2;
}

int Kosmetyka::pokazaty() {
    std::cout << "Kosmetychnyi virib\n";
    return 1;
}

int Kosmetyka::opysTovaru() {
    std::cout << "[" << brend << "] " << nazva << " - " << tsina << " grn. ";
    return 1;
}

Doglyad::Doglyad() {
    setNazva("Universal zasib");
    setBrend("Natura");
    setTsina(150);
    typShkiry = "usi typy";

    opysTovaru();
    pokazaty();
}

int Doglyad::setTypShkiry(std::string typ) {
    typShkiry = typ;
    return 1;
}

int Doglyad::pokazaty() {
    std::cout << "Typ shkiry: " << typShkiry << "\n";
    return 1;
}

KremDlyaOblychchya::KremDlyaOblychchya() {
    spf = 0;
}

KremDlyaOblychchya::KremDlyaOblychchya(int s) {
    setNazva("Krem dlya oblychchya");
    setBrend("Vichy");
    setTsina(320);
    spf = s;

    opysTovaru();
    pokazaty();
}

int KremDlyaOblychchya::setSPF(int s) {
    spf = s;
    return 1;
}

int KremDlyaOblychchya::pokazaty() {
    std::cout << "SPF: " << spf << "\n";
    return 1;
}

NichnyiKrem::NichnyiKrem(int s, std::string komponenty) {
    setNazva("Nichnyi krem");
    setBrend("Loreal");
    setTsina(480);
    setSPF(s);

    aktyvniKomponenty = komponenty;

    opysTovaru();
    pokazaty();
}

int NichnyiKrem::pokazaty() {
    std::cout << "Sklad: " << aktyvniKomponenty << "\n";
    return 1;
}

Pomada::Pomada() {
    setNazva("Pomada");
    setBrend("MAC");
    setTsina(550);
    kolir = "chervonyi";

    opysTovaru();
    pokazaty();
}

int Pomada::setKolir(std::string k) {
    kolir = k;
    return 1;
}

int Pomada::pokazaty() {
    std::cout << "Kolir: " << kolir << "\n";
    return 1;
}

void Pomada::nanesty() {
    std::cout << "Naneseno 1 shar pomady\n";
}

void Pomada::nanesty(int kilkist) {
    std::cout << "Naneseno " << kilkist << " shariv pomady\n";
}