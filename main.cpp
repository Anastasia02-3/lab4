#include <iostream>
#include "kosmetyka.h"
using namespace std;

int main() {
    cout << "--- Testuvannya ierarkhii (za prykladom vikladacha) ---\n\n";

    Doglyad *tovar1 = new Doglyad();
    
    cout << "\n";
    Pomada *tovar2 = new Pomada();
    
    cout << "\n";
    KremDlyaOblychchya *tovar3 = new KremDlyaOblychchya(30);
    
    cout << "\n";
    NichnyiKrem *tovar4 = new NichnyiKrem(0, "Retynol");
    delete tovar1;
    delete tovar2;
    delete tovar3;
    delete tovar4;

    return 0;
}