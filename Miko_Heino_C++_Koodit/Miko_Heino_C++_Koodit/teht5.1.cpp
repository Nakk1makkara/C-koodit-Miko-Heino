#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>

class Viisari {
private:
    int arvo;
    int maximi;

public:
    Viisari(int max) : arvo(0), maximi(max) {}
    ~Viisari() {}

    int etene() {
        arvo = (arvo + 1) % maximi;
        return arvo;
    }

    void nayta() const {
        if (arvo < 10) {
            std::cout << "0";
        }
        std::cout << arvo;
    }
};

class Kello {

private:
    Viisari* tunnit;
    Viisari* minuutit;
    Viisari* sekunnit;

public:
    Kello(int h, int m, int s) : tunnit(new Viisari(12)), minuutit(new Viisari(60)), sekunnit(new Viisari(60)) {
        tunnit->etene();
        minuutit->etene();
        sekunnit->etene();
    }

    ~Kello() {
        delete tunnit;
        delete minuutit;
        delete sekunnit;
    }

    void nayta() const {
        std::cout << "Kello: ";
        tunnit->nayta();
        std::cout << ":";
        minuutit->nayta();
        std::cout << ":";
        sekunnit->nayta();
        std::cout << '\n';
    }

    void kay() {
        if (sekunnit->etene() == 0) {
            if (minuutit->etene() == 0) {
                tunnit->etene();
            }
        }

        std::system("cls");

        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
};

int main() {
    Kello* watch = new Kello(12, 0, 0);

    while (1) {
        watch->kay();
        watch->nayta();
        std::system("cls");
    }

    delete watch;
    return 0;
}

