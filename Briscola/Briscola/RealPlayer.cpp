#include "realplayer.h"

RealPlayer::RealPlayer() {
    mazzo.setDim(0);
}

RealPlayer::~RealPlayer() {

}

bool RealPlayer::giocaCarta(int pos) {
    Carta cartaGiocata = getMazzo().getCarta(pos);
    return true;
}

void RealPlayer::setCarta(Carta& carta) {
	this->mazzo + carta;
}

/*Napoletano RealPlayer::inizializzaPlayer(Napoletano mazzoCarte) {
    this->mazzo.setDim(0);
    for (int i = 0; i < 3; i++) {
        //Carta c = --mazzoCarte;
        //setCarta(c);
    }
    return mazzoCarte;
}*/


void RealPlayer::test(Napoletano n) {

}