#include "cppturkce.hpp"

kullan adalani std;

sayi ana() {
    yazi veri;
    yazi sifre = "1234";
    yazdir << "Sifre : ";
    girdi >> veri;

    eger(veri == sifre) {
        yazdir << "Dogru";
    } degilse {
        yazdir << "Yanlis";
    }
}
