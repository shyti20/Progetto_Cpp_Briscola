#include "mazzodicarte.h"

MazzoDiCarte::MazzoDiCarte() {
    dim = 0;
    c = nullptr;
}

MazzoDiCarte::~MazzoDiCarte() {
    delete[] c;
    c = nullptr;
}

bool MazzoDiCarte::operator-(Carta carta) { //rimuove una carta dal mazzo, assicurandosi che sia preesente, uso: mazzo - carta
    if (dim <= 0) return false;
    int i;
    for (i = 0; i < dim && carta.getNome() != c[i].getNome() && carta.getSeme() != c[i].getSeme(); i++);
    if (i >= dim) return false;
    for (int j = i; j < dim - 1; j++) {
        c[j] = c[j + 1];
    }
    Carta* temp = new Carta[dim - 1];
    for (int j = 0; j < dim - 1; j++) {
        temp[j] = c[j];
    }
    dim--;
    setDim(dim);
    for (int j = 0; j < dim; j++) {
        c[j] = temp[j];
    }
    delete[] temp;
    return true;
}


/*void MazzoDiCarte::setDim(int dim) { //pericoloso
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



}*/

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
    if (dim != 0 && pos <= dim) {
        return c[pos];
    }
    Carta c;
    return c;
}
