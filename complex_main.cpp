#include <iostream>
#include "complex.h"
#include <assert.h>
#include <cmath>

void tests() {
    complex nr(1, 2);
    assert(2 == nr.get_imag());
    assert(1 == nr.get_real());

    {//test Mult
        complex* l[] = { new complex(1, 2), new complex(3, 4) };

        complex rezultat = l[0]->mult(l[1]);
        assert(-5 == rezultat.get_real());
        assert(10 == rezultat.get_imag());
        //-4+7i
    }

    {//test  Qout
        complex* l[] = { new complex(1, 2), new complex(1, 2) };

        complex rezultat = l[0]->quot(l[1]);
        assert(0 == rezultat.get_imag());
        assert(1 == rezultat.get_real());
        //1+0i
    }


    {//test abs
        complex nr = complex(2, sqrt(5));

        double rezultat = nr.abs();
        assert(3 == rezultat);
        //trebuie sa dea sqrt(4+5)=3
    }

    {//Test compute_polar
        complex nr = complex(sqrt(2), sqrt(2));
        complex rezultat = nr.compute_polar();
        //double x = rezultat.get_complex();  //1.4142135623730949
        //double y = sqrt(2);                 //1.4142135623730951
        //desi matematic calculul este ok pe double apare diferena la ultimele 2 digits si .... error
        float x = (float)rezultat.get_real();
        float y = sqrt(2);
        assert(y == x);
        //1+i*sqrt(3)=2(cos(60) + i sin(60))=2 cos 60 + 2 i sin 60-= 1+sqrt(3)i
        std::cout << "Test Ok " << '\n';
    }

    {//Test AD
        complex* l[] = { new complex(1, 2), new complex(2, 3) };
        complex rezultat = l[0]->add(l[1]);
        assert(5 == rezultat.get_imag());
        assert(3 == rezultat.get_real());
        //trebuie sa dea 3+5i
    }
}
int main()
{
    tests();
    //cout << "Hello, World!";
    return 0;
}