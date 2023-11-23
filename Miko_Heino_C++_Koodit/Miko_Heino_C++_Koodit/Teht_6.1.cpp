#include <iostream>

class Ajoneuvo {
public:
    Ajoneuvo(int Huippunopeus, int K�ytt��nOttovuosi, int Paino)
        : Huippunopeus_(Huippunopeus), K�ytt��nOttovuosi_(K�ytt��nOttovuosi), Paino_(Paino) {}

protected:
    int Huippunopeus_;
    int K�ytt��nOttovuosi_;
    int Paino_;
};

class Auto : public Ajoneuvo {
public:
    Auto(int Huippunopeus, int K�ytt��nOttovuosi, int Paino, int OvienLukum��r�, int RenkaidenLukum��r�)
        : Ajoneuvo(Huippunopeus, K�ytt��nOttovuosi, Paino), OvienLukum��r�_(OvienLukum��r�), RenkaidenLukuM��r�_(RenkaidenLukum��r�) {}

protected:
    int OvienLukum��r�_;
    int RenkaidenLukuM��r�_;
};

class Henkil�auto : public Auto {
public:
    Henkil�auto(int Huippunopeus, int K�ytt��nOttovuosi, int Paino, int OvienLukum��r�, int RenkaidenLukum��r�, int MatkustajaMax)
        : Auto(Huippunopeus, K�ytt��nOttovuosi, Paino, OvienLukum��r�, RenkaidenLukum��r�), MatkustajaMax_(MatkustajaMax) {}

private:
    int MatkustajaMax_;
};

class Kuormaauto : public Auto {
public:
    Kuormaauto(int Huippunopeus, int K�ytt��nOttovuosi, int Paino, int OvienLukum��r�, int RenkaidenLukum��r�, int MaxKuorma)
        : Auto(Huippunopeus, K�ytt��nOttovuosi, Paino, OvienLukum��r�, RenkaidenLukum��r�), MaxKuorma_(MaxKuorma) {}

private:
    int MaxKuorma_;
};

class Lentokone : public Ajoneuvo {
public:
    Lentokone(int Huippunopeus, int K�ytt��nOttovuosi, int Paino, int MaxLentoKorkeus)
        : Ajoneuvo(Huippunopeus, K�ytt��nOttovuosi, Paino), MaxLentokorkeus_(MaxLentoKorkeus) {}

private:
    int MaxLentokorkeus_;
};

class Laiva : public Ajoneuvo {
public:
    Laiva(int Huippunopeus, int K�ytt��nOttovuosi, int Paino, int MaxKiihtyvyys)
        : Ajoneuvo(Huippunopeus, K�ytt��nOttovuosi, Paino), MaxKiihtyvyys_(MaxKiihtyvyys) {}

private:
    int MaxKiihtyvyys_;
};

int main() {
    Henkil�auto Henkil�auto(200, 2000, 1500, 4, 4, 5);
    Kuormaauto Kuormaauto(120, 1990, 5000, 2, 8, 8000);
    Lentokone Lentokone(800, 2010, 50000, 12000);
    Laiva Laiva(40, 2020, 100000, 10);
    return 0;
}