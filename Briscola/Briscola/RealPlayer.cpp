#include "realplayer.h"
#include "MyForm.h"

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