#include "napoletano.h"

Napoletano::Napoletano() {
    dim = 40;
    c = new Carta[dim];
}

Napoletano::~Napoletano() {

}

void Napoletano::inizializza() { //inizializza il mazzo di carte
    string numeriCarte[] = { "", "due", "tre", "quattro", "cinque", "sei", "sette" };
    for (int i = 0; i < 10; i++) {
        switch (i % 10) {
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
            c[i].setNome(numeriCarte[(i - 1) % 10]);
            c[i].setPunteggio(0);
        }
        c[i].setSeme("Bastoni");
        c[i].setPath(c[i].getNome(), c[i].getSeme());
    }

    for (int i = 10; i < 20; i++) {
        switch (i % 10) {
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
            c[i].setNome(numeriCarte[(i - 1) % 10]);
            c[i].setPunteggio(0);
        }
        c[i].setSeme("Spade");
        c[i].setPath(c[i].getNome(), c[i].getSeme());
    }

    for (int i = 20; i < 30; i++) {
        switch (i % 10) {
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
            c[i].setNome(numeriCarte[(i - 1) % 10]);
            c[i].setPunteggio(0);
        }
        c[i].setSeme("Denari");
        c[i].setPath(c[i].getNome(), c[i].getSeme());
    }

    for (int i = 30; i < 40; i++) {
        switch (i % 10) {
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
            c[i].setNome(numeriCarte[(i - 1) % 10]);
            c[i].setPunteggio(0);
        }
        c[i].setSeme("Coppe");
        c[i].setPath(c[i].getNome(), c[i].getSeme());
    }
}

int Napoletano::getDim() {
    return dim;
}


void Napoletano::operator+(const Carta& carta) {
    //aggiunge una carta al mazzo, uso: mazzo + carta
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
    }
    else {
        dim++;
        c = new Carta[dim];
    }
    if (dim > 0) {
        c[dim - 1] = carta;
    }
}

Carta Napoletano::operator--() {
    //estrae una carta random dal mazzo
    int nRand = rand() % dim;
    if (dim == 0) {
        return Carta();
    }
    Carta cartaEstratta = c[nRand];
    Carta* temp = new Carta[dim];

    c[nRand] = c[dim - 1];
    c[dim - 1] = cartaEstratta;

    for (int i = 0; i < dim; i++) {
        temp[i] = c[i];
    }
    dim--;
    delete[] c;
    c = new Carta[dim];
    for (int i = 0; i < dim; i++) {
        c[i] = temp[i];
    }
    delete[] temp;

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

void Napoletano::setMazzo(Napoletano deck) {
    if (dim > 0) {
        delete[] c;
        dim = deck.dim;
        for (int i = 0; i < dim; i++) {
            c[i] = deck.getCarta(i);
        }
    } else {
        c = nullptr;
    }
}

void Napoletano::setCartaPos(Carta& temp, int pos) {
    c[pos] = temp;
}