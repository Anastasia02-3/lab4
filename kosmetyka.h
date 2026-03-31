#ifndef KOSMETYKA_H
#define KOSMETYKA_H

#include <iostream>
#include <string>

class Kosmetyka {
private:
    std::string nazva;
    std::string brend;
    double tsina;

public:
    Kosmetyka();
    Kosmetyka(std::string n, std::string b, double t);

    int setNazva(std::string n);
    int setBrend(std::string b);
    int setTsina(double t);

    double F(int x);
    double F(double x);

    virtual int pokazaty();

protected:
    int opysTovaru();
};

class Doglyad : public Kosmetyka {
private:
    std::string typShkiry;

public:
    Doglyad();
    int setTypShkiry(std::string typ);
    int pokazaty() override;
};


class KremDlyaOblychchya : public Doglyad {
private:
    int spf;

public:
    KremDlyaOblychchya();
    KremDlyaOblychchya(int s);

    int setSPF(int s);
    int pokazaty() override;
};

class NichnyiKrem : public KremDlyaOblychchya {
private:
    std::string aktyvniKomponenty;

public:
    NichnyiKrem(int s, std::string komponenty);
    int pokazaty() override;
};


class Pomada : public Kosmetyka {
private:
    std::string kolir;

public:
    Pomada();

    int setKolir(std::string k);
    int pokazaty() override;

    void nanesty();
    void nanesty(int kilkist);
};

#endif