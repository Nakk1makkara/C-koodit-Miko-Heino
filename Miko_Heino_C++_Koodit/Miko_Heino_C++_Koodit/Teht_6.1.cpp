#include <iostream>

class Ajoneuvo {
public:
    Ajoneuvo(int Huippunopeus, int KäyttöönOttovuosi, int Paino)
        : Huippunopeus_(Huippunopeus), KäyttöönOttovuosi_(KäyttöönOttovuosi), Paino_(Paino) {}

protected:
    int Huippunopeus_;
    int KäyttöönOttovuosi_;
    int Paino_;
};

class Auto : public Ajoneuvo {
public:
    Auto(int Huippunopeus, int KäyttöönOttovuosi, int Paino, int OvienLukumäärä, int RenkaidenLukumäärä)
        : Ajoneuvo(Huippunopeus, KäyttöönOttovuosi, Paino), OvienLukumäärä_(OvienLukumäärä), RenkaidenLukuMäärä_(RenkaidenLukumäärä) {}

protected:
    int OvienLukumäärä_;
    int RenkaidenLukuMäärä_;
};

class Henkilöauto : public Auto {
public:
    Henkilöauto(int Huippunopeus, int KäyttöönOttovuosi, int Paino, int OvienLukumäärä, int RenkaidenLukumäärä, int MatkustajaMax)
        : Auto(Huippunopeus, KäyttöönOttovuosi, Paino, OvienLukumäärä, RenkaidenLukumäärä), MatkustajaMax_(MatkustajaMax) {}

private:
    int MatkustajaMax_;
};

class Kuormaauto : public Auto {
public:
    Kuormaauto(int Huippunopeus, int KäyttöönOttovuosi, int Paino, int OvienLukumäärä, int RenkaidenLukumäärä, int MaxKuorma)
        : Auto(Huippunopeus, KäyttöönOttovuosi, Paino, OvienLukumäärä, RenkaidenLukumäärä), MaxKuorma_(MaxKuorma) {}

private:
    int MaxKuorma_;
};

class Lentokone : public Ajoneuvo {
public:
    Lentokone(int Huippunopeus, int KäyttöönOttovuosi, int Paino, int MaxLentoKorkeus)
        : Ajoneuvo(Huippunopeus, KäyttöönOttovuosi, Paino), MaxLentokorkeus_(MaxLentoKorkeus) {}

private:
    int MaxLentokorkeus_;
};

class Laiva : public Ajoneuvo {
public:
    Laiva(int Huippunopeus, int KäyttöönOttovuosi, int Paino, int MaxKiihtyvyys)
        : Ajoneuvo(Huippunopeus, KäyttöönOttovuosi, Paino), MaxKiihtyvyys_(MaxKiihtyvyys) {}

private:
    int MaxKiihtyvyys_;
};

int main() {
    Henkilöauto Henkilöauto(200, 2000, 1500, 4, 4, 5);
    Kuormaauto Kuormaauto(120, 1990, 5000, 2, 8, 8000);
    Lentokone Lentokone(800, 2010, 50000, 12000);
    Laiva Laiva(40, 2020, 100000, 10);
    return 0;
}