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

};