#include "carta.h"

Carta::Carta() {
    seme = "Undefined";
    nome = "Undefined";
    path = "Undefined";
    numero = 1;
    punteggio = 0;
}

Carta::Carta(string seme, string nome, string path,int numero, int punteggio) {
    this->seme = seme;
    this->nome = nome;
    this->numero = numero;
    this->punteggio = punteggio;
    this->path = path;
    if (numero <= 0 || punteggio < 0) {
        this->numero = 1;
        this->punteggio = 0;
    }

}

Carta::~Carta() {

}


string Carta::getSeme() {
    return seme;
}

string Carta::getNome() {
    return nome;
}

int Carta::getNumero() {
    return numero;
}

int Carta::getPunteggio() {
    return punteggio;
}

string Carta::getPath() {
    return path;
}

void Carta::setSeme(string seme) {
    this->seme = seme;
}
void Carta::setNome(string nome) {
    this->nome = nome;
}
void Carta::setNumero(int numero) {
    this->numero = numero;

    if (this->numero <= 0) {
        this->numero = 1;
        punteggio = 0;
    }
}
void Carta::setPunteggio(int punteggio) {
    this->punteggio = punteggio;

    if (this->punteggio < 0) {
        this->punteggio = 0;
        numero = 1;
    }
}
void Carta::setPath(string seme, string nome) {
    path = seme + nome + ".png";
}
Carta Carta::confronta(Carta c2, Carta briscola) {
    Carta cartaVincente;
    if (c2.seme == this->seme) {
        cartaVincente = (c2.punteggio > this->punteggio) ? c2 : (*this);
    } else if (c2.seme == this->seme && c2.punteggio == this->punteggio) {
        cartaVincente = (c2.numero > this->numero) ? c2 : (*this);
    } else if(c2.seme != this->seme && c2.seme != briscola.seme && (*this).seme != briscola.seme) {
        cartaVincente = (*this);
    } else {
        cartaVincente = (c2.seme == briscola.seme) ? c2 : (*this);
    }
    return cartaVincente;
}
int Carta::operator+(Carta c2) {
    return numero + c2.numero;

}

Carta& Carta::operator=(Carta carta)
{
    seme = carta.seme;
    nome = carta.nome;
    numero = carta.numero;
    punteggio = carta.punteggio;
    path = carta.path;
    if (numero <= 0 || punteggio < 0) {
        numero = 1;
        punteggio = 0;
    }

    return (*this);
}

bool Carta::operator!=(Carta c2) {
    return (getNome() != c2.getNome() && getSeme() != c2.getSeme() && getNumero() != c2.getNumero() && getPunteggio() != c2.getPunteggio() && getPath() != c2.getPath());
}
