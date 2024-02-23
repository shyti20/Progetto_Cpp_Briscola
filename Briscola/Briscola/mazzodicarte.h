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
        /*pericoloso!, cambia la dimensione ma cancella
        tutti gli elementi dell'array */
        void setDim(int dim); 
        bool operator-(Carta carta); //toglie una carta assicurandosi che sia presente
        void operator+(Carta carta); //aggiunge una carta
};

#endif