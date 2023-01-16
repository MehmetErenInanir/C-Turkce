#include "cppturkce.hpp"

kullan adalani std;

sayi ana() {
    yazi sifre = "mehmet", input;
    yazdir << "Sifre : ";
    girdi >> input;
    eger(input == sifre) {
        yazdir << "Dogru!";
    } degilse {
        yazdir << "Yanlis!";
    }
}