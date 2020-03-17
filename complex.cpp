#include "complex.h"
#include <math.h>
#include <iostream>

complex::complex(double real, double imag) {
    this->imag = imag;
    this->real = real;
}
double complex::get_real() {
    //returneaza partea reala a nr complex
    return real;
}

double complex::get_imag() {
    //afiseaza partea img a nr complex
    return imag;
}
void complex::show_compl() {
    //arata numarul sub forma complexa adica a+b*i
    std::cout << "Die komplexe Zahl ist: " << real << " + " << imag << " *i";
}

void afisare_exp_form(double r, double teta) {
    std::cout << "Die Exponentialform der komplexen Zahl ist: " << r << " * " << "e^( i * " << teta << " )" << '\n';
}

void complex::show_exp() {
    /*
     * calculeaza r, care este modulul numarului complex si teta care este arctg de coef. imaginar si cel real
     * apoi transfera rezultatele obtinute intr-un numar de tip complex care va fi trimis ca parametru functiei de afisare
     * apoi pt afisare apeleaza functia afisare_exp_form care afiseaza numarul sub forma polara
     * */
    //double r = abs();
    double teta = atan(imag / real);
    //afisare_exp_form(r, teta);
}
complex complex::add(complex* othet) {
    /*aduna unui nr de tip complex, un altul trimis ca parametru
     * nici unul dintre numere nu se modifica
     * rezultatul e un nou obiect de tip complex
     * */
    complex rezultat_suma(0, 0);
    rezultat_suma.real = real + othet->real;
    rezultat_suma.imag = othet->imag + imag;

    return rezultat_suma;
}

complex complex::mult(complex* othet) {
    /*multiplicarea unui nr de tip complex, cu un altul trimis ca parametru
     * nici unul dintre numere nu se modifica
     * rezultatul e un nou obiect de tip complex
     * */
    complex rezultat_mult(0, 0);
    rezultat_mult.real = (real * othet->real) - (imag * othet->imag);
    rezultat_mult.imag = (othet->real * imag) + (real * othet->imag);

    return rezultat_mult;
}

complex complex::quot(complex* othet) {
    /*divie un nr de tip complex, cu un altul trimis ca parametru
     * nici unul dintre numere nu se modifica
     * rezultatul e un nou obiect de tip complex
     * */
    double numitor = (othet->real * othet->real) + (othet->imag * othet->imag);
    complex rezultat_quot(0, 0);
    rezultat_quot.real = ((this->real * othet->real) + (othet->imag * othet->imag)) / numitor;
    rezultat_quot.imag = ((othet->real * this->imag) - (this->real * othet->imag)) / numitor;

    return rezultat_quot;
}