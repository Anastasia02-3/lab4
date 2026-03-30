#include <iostream>
#include "kosmetyka.h"
using namespace std;

int main() {



    cout << "   Uspadkuvannya ta polimorfizm\n";
    cout << "   Tema: Kosmetychni zasoby\n";

    cout << "--- Klas 1: Kosmetyka ---\n";
    Kosmetyka k;
    k.setNazva("Tonik");
    k.setBrend("NoName");
    k.setTsina(99.0);
    k.pokazaty();
    cout << "\n";

    cout << "--- Klas 2: Doglyad ---\n";
    Doglyad d;
    d.setTypShkiry("suha");
    d.pokazaty();
    cout << "\n";

    cout << "--- Doglyad::pokazaty(false) - perenavantazhenyi ---\n";
    d.pokazaty(false);
    cout << "\n";
    cout << "--- Klas 3: KremDlyaOblychchya ---\n";
    KremDlyaOblychchya krem;
    krem.setSPF(30);
    krem.setUvilazhnenna(true);
    krem.pokazaty();
    cout << "\n";
    cout << "--- Klas 4: NichnyiKrem (za zamovchuvanniam) ---\n";
    NichnyiKrem nk1;
    nk1.pokazaty();
    cout << "\n";
    nk1.zastosuvannya();
    nk1.zastosuvannya(15);
    cout << "\n";
    cout << "--- Klas 4: NichnyiKrem (z parametramy) ---\n";
    NichnyiKrem nk2("Nivea", "hialuranova kyslota, vitamin C", 290.0);
    nk2.pokazaty();
    cout << "\n";
    cout << "--- Klas 5: Pomada (za zamovchuvanniam) ---\n";
    Pomada p1;
    p1.pokazaty();
    cout << "\n";
    p1.naklasty();
    p1.naklasty(true);
    cout << "\n";

    cout << "--- Klas 5: Pomada (z parametramy) ---\n";
    Pomada p2("NYX", "rozovyi", "gloss", 380.0);
    p2.setUvilazhnenna(true);
    p2.pokazaty();
    cout << "\n";

 
    cout << "   Polimorfizm: masiv Kosmetyka*\n";

    Kosmetyka* asortyment[4];
    asortyment[0] = new Doglyad();
    asortyment[1] = new KremDlyaOblychchya();
    asortyment[2] = new NichnyiKrem("Garnier", "aloe vera", 210.0);
    asortyment[3] = new Pomada("Maybelline", "koralovyi", "satin", 320.0);

    for (int i = 0; i < 4; i++) {
        cout << "--- Tovar #" << i + 1 << " ---\n";
        asortyment[i]->pokazaty();
        cout << "\n";
    }

    for (int i = 0; i < 4; i++) delete asortyment[i];

    return 0;
}