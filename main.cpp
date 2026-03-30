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

    return 0;
}