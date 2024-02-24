#include "napoletano.h"

Napoletano::Napoletano() {
    dim = 40;
    c = new Carta[dim];
}

Napoletano::~Napoletano() {

}

void Napoletano::inizializza() { //inizializza il mazzo di carte
    string numeriCarte[7] = {"due", "tre", "quattro", "cinque", "sei", "sette"};
    for (int i = 0; i < dim; i++) {
        int temp = (i + 1) % 10;
        c[i].setNumero(temp);
        switch (temp) {
            case 1:
                c[i].setNome("asso");
                c[i].setPunteggio(11);
                break;
            case 8:
                c[i].setNome("fante");
                c[i].setPunteggio(2);
                break;
            case 9:
                c[i].setNome("cavallo");
                c[i].setPunteggio(3);
                break;
            case 0:
                c[i].setNome("re");
                c[i].setPunteggio(4);
                break;
            case 3:
                c[i].setNome("tre");
                c[i].setPunteggio(10);
                break;
            default:
                c[i].setNome(numeriCarte[temp - 1]);
                c[i].setPunteggio(0);
        }
        switch (i % 4) {
            case 0:
                c[i].setSeme("Bastoni");
                break;
            case 1:
                c[i].setSeme("Spade");
                break;
            case 2:
                c[i].setSeme("Denari");
                break;
            case 3:
                c[i].setSeme("Coppe");
                break;
        }
        c[i].setPath(c[i].getSeme(), c[i].getNome());
    }
}

int Napoletano::getDim() {
    return dim;
}


Napoletano& Napoletano::operator+(const Carta& carta) { //aggiunge una carta al mazzo, uso: mazzo + carta
    if (dim != 0) {
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
    } else {
        dim++;
        delete[] c;
        c = new Carta[dim];
    }
    c[dim - 1] = carta;

    return (*this);
}

Carta Napoletano::operator--() { //estrae una carta random dal mazzo
    int nRand = rand() % 40;
    Carta cartaEstratta = c[nRand];
    Carta *temp = new Carta[dim];
    for (int i = nRand; i < dim - 1; i++) {
        c[nRand] = c[i + 1];
    }
    for (int i = 0; i < dim; i++) {
        temp[i] = c[i];
    }
    dim--;
    delete[] c;
    c = new Carta[dim];
    for (int i = 0 ; i < dim; i++) {
        c[i] = temp[i];
    }

    return cartaEstratta;
}

Napoletano& Napoletano::operator=(const Napoletano& mazzo) {
    dim = mazzo.dim;
    if (dim != 0) {
        delete[] c;
        c = new Carta[dim];
        for (int i = 0; i < dim; i++) {
            c[i] = mazzo.c[i];
        }
    }
    else {
        c = nullptr;
    }

    return (*this);

}