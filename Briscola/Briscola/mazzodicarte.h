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
        Carta getCarta(int pos);
        bool operator-(Carta carta); //toglie una carta assicurandosi che sia presente
        // MazzoDiCarte& operator+(Carta carta); //aggiunge una carta
        MazzoDiCarte& operator=(MazzoDiCarte& mazzo);
};

#endif