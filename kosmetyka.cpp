#include "kosmetyka.h"

void Kosmetyka::setNazva(string n) { nazva = n; }
void Kosmetyka::setBrend(string b) { brend = b; }
void Kosmetyka::setTsina(double t) { tsina = t; }

void Kosmetyka::pokazaty() {
    cout << "[" << brend << "] " << nazva << " - " << tsina << " grn\n";
}

void Kosmetyka::opysTovaru() {
    cout << "Brend: " << brend << "\n";
    cout << "Nazva: " << nazva << "\n";
    cout << "Tsina: " << tsina << " grn\n";
}

Doglyad::Doglyad() {
    setNazva("Universal zasib");
    setBrend("Natura");
    setTsina(150.0);
    typShkiry = "usy typy";
}

void Doglyad::setTypShkiry(string typ) { typShkiry = typ; }

void Doglyad::pokazaty() {
    opysTovaru();
    cout << "Typ shkiry: " << typShkiry << "\n";
}

void Doglyad::pokazaty(bool detalno) {
    if (detalno) {
        cout << "=== DETALNA INFORMATSIYA ===\n";
        pokazaty();
    } else {
        Kosmetyka::pokazaty();
    }
}

KremDlyaOblychchya::KremDlyaOblychchya() {
    setNazva("Krem dlya oblychchya");
    setBrend("Vichy");
    setTsina(320.0);
    setTypShkiry("zhyrna");
    spf = 0;
    zUvilazhnennyam = false;
}

void KremDlyaOblychchya::setSPF(int s)           { spf = s; }
void KremDlyaOblychchya::setUvilazhnenna(bool u) { zUvilazhnennyam = u; }

void KremDlyaOblychchya::pokazaty() {
    Doglyad::pokazaty();
    cout << "SPF: " << spf << "\n";
    cout << "Uvilazhnenna: " << (zUvilazhnennyam ? "tak" : "ni") << "\n";
}

NichnyiKrem::NichnyiKrem() {
    setNazva("Nichnyi krem");
    setBrend("L'Oreal");
    setTsina(480.0);
    setTypShkiry("suha ta normalna");
    setSPF(0);
    setUvilazhnenna(true);
    aktyvniKomponenty = "retynol, kollagen";
    hodynZastosuvannya = 22;
}

NichnyiKrem::NichnyiKrem(string brend, string komponenty, double tsina) {
    setBrend(brend);
    setNazva("Nichnyi krem");
    setTsina(tsina);
    setTypShkiry("suha ta normalna");
    setSPF(0);
    setUvilazhnenna(true);
    aktyvniKomponenty = komponenty;
    hodynZastosuvannya = 22;
}

void NichnyiKrem::setKomponenty(string k) { aktyvniKomponenty = k; }
void NichnyiKrem::setHodyna(int h)        { hodynZastosuvannya = h; }

void NichnyiKrem::pokazaty() {
    KremDlyaOblychchya::pokazaty();
    cout << "Aktyvni komponenty: " << aktyvniKomponenty << "\n";
    cout << "Zastosuvannya ob: " << hodynZastosuvannya << ":00\n";
}

void NichnyiKrem::zastosuvannya() {
    cout << "Nakladay pered snom ob " << hodynZastosuvannya << ":00\n";
}

void NichnyiKrem::zastosuvannya(int khvylyny) {
    cout << "Nakladay ob " << hodynZastosuvannya
         << ":00, trymai " << khvylyny << " khvylyny\n";
}

Pomada::Pomada() {
    setNazva("Pomada");
    setBrend("MAC");
    setTsina(550.0);
    kolir = "chervonyi";
    finish = "matte";
    zUvilazhnennyam = false;
}

Pomada::Pomada(string brend, string kolir, string finish, double tsina) {
    setBrend(brend);
    setNazva("Pomada");
    setTsina(tsina);
    this->kolir  = kolir;
    this->finish = finish;
    zUvilazhnennyam = false;
}

void Pomada::setKolir(string k)      { kolir = k; }
void Pomada::setFinish(string f)     { finish = f; }
void Pomada::setUvilazhnenna(bool u) { zUvilazhnennyam = u; }

void Pomada::pokazaty() {
    opysTovaru();
    cout << "Kolir: "        << kolir  << "\n";
    cout << "Finish: "       << finish << "\n";
    cout << "Uvilazhnenna: " << (zUvilazhnennyam ? "tak" : "ni") << "\n";
}

void Pomada::naklasty() {
    cout << "Nakladay " << kolir << " pomadu (" << finish << ")\n";
}

void Pomada::naklasty(bool zKonturnymOlivtsem) {
    if (zKonturnymOlivtsem)
        cout << "Spochatkuy okonturui huby, potim nakladay "
             << kolir << " pomadu\n";
    else
        naklasty();
}