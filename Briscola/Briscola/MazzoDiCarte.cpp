#include "mazzodicarte.h"

MazzoDiCarte::MazzoDiCarte() {
    dim = 0;
    c = nullptr;
}

MazzoDiCarte::~MazzoDiCarte() {
    delete[] c;
    c = nullptr;
}

bool MazzoDiCarte::operator-(Carta carta) { 
    //rimuove una carta dal mazzo, assicurandosi che sia preesente, uso: mazzo - carta, la rimozione non rimuove fisicamente la carta ma ne "Elimina" il contenuto
    if (dim <= 0) return false;
    int i;
    for (i = 0; i < dim && carta.getNome() != c[i].getNome() && carta.getSeme() != c[i].getSeme(); i++);
    if (i >= dim) return false;
    Carta temp;
    c[i] = temp;
    return true;
}


void MazzoDiCarte::setDim(int dim) {
    if (c != nullptr) {
        delete[] c;
    }
    this->dim = dim;
    if (dim != 0) {
        c = new Carta[dim];
    }
    else {
        c = nullptr;
    }
}

Carta MazzoDiCarte::getCarta(int pos) {
    if (dim >= 0 && pos < dim && pos >= 0 ) {
        return c[pos];
    }
    Carta c;
    return c;
}
