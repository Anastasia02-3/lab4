#ifndef KOSMETYKA_H
#define KOSMETYKA_H

#include <iostream>
#include <string>

class Kosmetyka {
protected:
    std::string nazva;
    std::string brend;
    double tsina;

public:
    int setNazva(std::string n);
    int setBrend(std::string b);
    int setTsina(double t);

    virtual int pokazaty(); 

protected:
    int opysTovaru();
};


class Doglyad : public Kosmetyka {
protected:
    std::string typShkiry;

public:
    Doglyad();
    int setTypShkiry(std::string typ);
    int pokazaty() override;
};

// ----------------------

class KremDlyaOblychchya : public Doglyad {
protected:
    int spf;

public:
    KremDlyaOblychchya();
    KremDlyaOblychchya(int s);
    int setSPF(int s);
};
class NichnyiKrem : public KremDlyaOblychchya {
    std::string aktyvniKomponenty;

public:
    NichnyiKrem(int s, std::string komponenty);
};


class Pomada : public Kosmetyka {
    std::string kolir;

public:
    Pomada();
    int setKolir(std::string k);

    int pokazaty() override;

    void nanesty();
    void nanesty(int kilkist);
};

#endif