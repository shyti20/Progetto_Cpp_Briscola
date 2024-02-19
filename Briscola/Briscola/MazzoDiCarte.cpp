#include "mazzodicarte.h"

MazzoDiCarte::MazzoDiCarte() {
    dim = 1;
    c = new Carta[dim];
}

MazzoDiCarte::~MazzoDiCarte() {
    delete[] c;
}

bool MazzoDiCarte::operator-(Carta carta) {
    if (dim <= 0) return false;
    int i;
    for (i = 0; i < dim && carta.getNome() != c[i].getNome() && carta.getSeme() != c[i].getSeme(); i++);
    if (i >= dim) return false;
    for (int j = i; j < dim - 1; j++) {
        c[j] = c[j + 1];
    }
    dim--;
    Carta* temp = new Carta[dim];
    for (int j = 0; j < dim; j++) {
        temp[j] = c[j];
    }
    setDim(dim);
    for (int j = 0; j < dim; j++) {
        c[j] = temp[j];
    }
    delete[] temp;
    return true;
}

bool MazzoDiCarte::operator+(Carta carta) {
    //dafare
}

void MazzoDiCarte::setDim(int dim) { //pericoloso
    this->dim = dim;
    delete[] c;
    c = new Carta[dim];
}