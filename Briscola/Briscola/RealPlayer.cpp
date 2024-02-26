#include "realplayer.h"

RealPlayer::RealPlayer() {
    mazzo.setDim(0);
}

RealPlayer::~RealPlayer() {

}

void RealPlayer::giocaCarta(int pos) {
    cartaGiocata = mazzo.getCarta(pos);
    mazzo - mazzo.getCarta(pos);
}

void RealPlayer::setCarta(Carta& carta) {
	this->mazzo + carta;
}

