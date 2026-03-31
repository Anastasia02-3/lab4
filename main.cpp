#include "kosmetyka.h"

int main() {

    Doglyad t1;

    std::cout << "\n";

    Pomada t2;
    t2.nanesty();
    t2.nanesty(3);

    std::cout << "\n";

    KremDlyaOblychchya t3(30);

    std::cout << "\n";

    NichnyiKrem t4(0, "Retynol");

    std::cout << "\n";

    Kosmetyka k;
    std::cout << k.F(5) << "\n";
    std::cout << k.F(5.5) << "\n";

    std::cout << "\n";

    Kosmetyka* obj = new Pomada();
    obj->pokazaty(); 

    delete obj;

    return 0;
}