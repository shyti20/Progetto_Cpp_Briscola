#ifndef NAPOLETANO_H
#define NAPOLETANO_H
#include "mazzodicarte.h"
#include <cstdlib>
#include <ctime>
class Napoletano : public MazzoDiCarte {
    public:
        Napoletano();
        ~Napoletano();
        void inizializza();
        int getDim();
        Napoletano& operator+(const Carta& carta);
        Carta operator--();
        Napoletano& operator=(const Napoletano& mazzo);
};

#endif