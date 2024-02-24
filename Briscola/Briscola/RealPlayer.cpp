#include "realplayer.h"

RealPlayer::RealPlayer() {

}

RealPlayer::~RealPlayer() {

}

bool RealPlayer::giocaCarta(Carta carta) {
	return mazzo - carta;
}

void RealPlayer::setCarta(Carta carta) {
	mazzo = mazzo + carta;
}

void RealPlayer::inizializza(Napoletano& mazzo) {
    if (mazzo.getDim() < 3) {
        return;
    }

    for (int i = 0; i < 3; i++) {
        setCarta(--mazzo);
    }
}