#ifndef KOSMETYKA_H
#define KOSMETYKA_H

#include <iostream>
#include <string>
using namespace std;

class Kosmetyka {
    string nazva;
    string brend;
    double tsina;

public:
    int setNazva(string n);
    int setBrend(string b);
    int setTsina(double t);
    int pokazaty(); 

protected:
    int opysTovaru(); 
};

class Doglyad : protected Kosmetyka {
    string typShkiry;
public:
    Doglyad(); 
    int setTypShkiry(string typ);
    int pokazaty(); 
};

class KremDlyaOblychchya : protected Doglyad {
protected:
    int spf;
public:
    KremDlyaOblychchya();
    KremDlyaOblychchya(int s);
    int setSPF(int s);
};

class NichnyiKrem : protected KremDlyaOblychchya {
    string aktyvniKomponenty;
public:
    NichnyiKrem(int s, string komponenty);
};

class Pomada : protected Kosmetyka {
    string kolir;
public:
    Pomada();
    int setKolir(string k);
    int pokazaty();
};

#endif