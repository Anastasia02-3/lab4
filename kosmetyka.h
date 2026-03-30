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
    void setNazva(string n);
    void setBrend(string b);
    void setTsina(double t);

    virtual void pokazaty();

    ~Kosmetyka() {}

protected:
    void opysTovaru();
};

class Doglyad : public Kosmetyka {
    string typShkiry;

public:
    Doglyad();

    void setTypShkiry(string typ);

    virtual void pokazaty() override;
    void pokazaty(bool detalno);
};


class KremDlyaOblychchya : public Doglyad {
    int spf;
    bool zUvilazhnennyam;

public:
    KremDlyaOblychchya();

    void setSPF(int s);
    void setUvilazhnenna(bool u);

    virtual void pokazaty() override;
};

class NichnyiKrem : public KremDlyaOblychchya {
    string aktyvniKomponenty;
    int hodynZastosuvannya;

public:
    NichnyiKrem();
    NichnyiKrem(string brend, string komponenty, double tsina);

    void setKomponenty(string k);
    void setHodyna(int h);

    virtual void pokazaty() override;

    void zastosuvannya();
    void zastosuvannya(int khvylyny);
};

class Pomada : public Kosmetyka {
    string kolir;
    string finish;
    bool zUvilazhnennyam;

public:
    Pomada();
    Pomada(string brend, string kolir, string finish, double tsina);

    void setKolir(string k);
    void setFinish(string f);
    void setUvilazhnenna(bool u);

    virtual void pokazaty() override;

    void naklasty();
    void naklasty(bool zKonturnymOlivtsem);
};

#endif