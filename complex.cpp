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