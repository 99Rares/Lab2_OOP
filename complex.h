#pragma once
class complex {
private:
    double real, imag;
public:

    complex(double real, double imag);/*
        Constructor
    */
    double get_imag();

    double get_real();

    void show_compl();/*
        zeigt  die komplexe Form einer Zahl auf dem Bildschirm an
    */
    void show_exp(); /*
        zeigt  die Exponentialform einer Zahl auf dem Bildschirm an
    */
    complex add(complex* nr2);/*
       berechnet die Summe. Die Funktion liefert ein Objekt
       vom Typ complex zuruck
   */

    complex mult(complex* nr2);/*
        berechnet den Produkt. Die Funktion liefert ein Objekt
        vom Typ complex zuruck
    */

    complex quot(complex* nr2);/*
        berechnet den Quotient. Die Funktion liefert ein Objekt
        vom Typ complex zuruck
    */
    double abs();/*
      berechnet den Betrag. Die Funktion liefert einen Wert
      vom Typ double zuruck
    */

    complex compute_polar();/*
        berechnet ihre Polarform. Die Funktion liefert ein Objekt
        vom Typ complex zuruck
    */

};