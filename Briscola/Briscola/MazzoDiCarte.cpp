#include "mazzodicarte.h"

MazzoDiCarte::MazzoDiCarte() {
    dim = 1;
    c = new Carta[dim];
}

MazzoDiCarte::~MazzoDiCarte() {
    delete[] c;
}

bool MazzoDiCarte::operator-(Carta carta) { //rimuove una carta dal mazzo, assicurandosi che sia preesente, uso: mazzo - carta
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

void MazzoDiCarte::operator+(Carta carta) { //aggiunge una carta al mazzo, uso: mazzo + carta
    Carta* temp = new Carta[dim];
    for (int i = 0; i < dim; i++) {
        temp[i] = c[i];
    }
    delete[] c;
    dim++;
    c = new Carta[dim];
    for (int i = 0; i < dim - 1; i++) {
        c[i] = temp[i];
    }
    delete[] temp;
    c[dim - 1] = carta;
}

void MazzoDiCarte::setDim(int dim) { //pericoloso
    this->dim = dim;
    delete[] c;
    c = new Carta[dim];
}