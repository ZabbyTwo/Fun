#include <iostream>
#include <string>
#include <vector>

class Fahrzeug
{
protected:
    int geschwindigkeit;
    std::string marke;

public:
    Fahrzeug(std::string marke)
    {
        this->marke = marke;
        this->geschwindigkeit = 0;
    }

    virtual void beschleunigen(int wert) = 0;
    virtual void anzeigen() = 0;
};

class Auto : public Fahrzeug
{
private:
    int anzahlTueren;

public:
    Auto(std::string marke, int tueren) : Fahrzeug(marke)
    {
        this->anzahlTueren = tueren;
    }

    void beschleunigen(int wert)
    {
        this->geschwindigkeit += wert;
    }

    void anzeigen()
    {
        std::cout << "Auto" << '\n';
        std::cout << "Marke: " << this->marke << '\n';
        std::cout << "Geschwindigkeit: " << this->geschwindigkeit << '\n';
        std::cout << "Anzahl Tueren: " << this->anzahlTueren << '\n';
    }
};

class Fahrrad : public Fahrzeug
{
private:
    bool hatGepaecktraeger;

public:
    Fahrrad(std::string marke, bool hatGepaecktraeger) : Fahrzeug(marke)
    {
        this->hatGepaecktraeger = hatGepaecktraeger;
    }

    void beschleunigen(int wert)
    {
        this->geschwindigkeit += wert/2;
    }

    void anzeigen()
    {
        std::cout << "Fahrrad" << '\n';
        std::cout << "Marke: " << this->marke << '\n';
        std::cout << "Geschwindigkeit: " << this->geschwindigkeit << '\n';
        std::cout << "Hat Gepaecktraeger: " << this->hatGepaecktraeger << '\n';
    }
};

int main()
{
    // Basisklassen-Zeiger verwenden, um Polymorphie zu testen
    std::vector<Fahrzeug *> meinFuhrpark;

    Auto meinAuto("VW", 5);
    Fahrrad meinRad("Cube", true);

    meinFuhrpark.push_back(&meinAuto);
    meinFuhrpark.push_back(&meinRad);

    for (Fahrzeug *f : meinFuhrpark)
    {
        f->beschleunigen(20);
        f->anzeigen();
        std::cout << "----------------" << std::endl;
    }

    return 0;
}