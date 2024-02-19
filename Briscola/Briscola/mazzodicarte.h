#ifndef MAZZODICARTE_H
#define MAZZODICARTE_H

#include <iostream>
#include "carta.h"

using namespace std;

class MazzoDiCarte {
    protected:
        Carta *c;
        int dim;
    public:
        MazzoDiCarte();
        virtual ~MazzoDiCarte();
        virtual void inizializza() = 0;
        void setDim(int dim);
        bool operator-(Carta carta);
        bool operator+(Carta carta); //da implementare
};

#endif