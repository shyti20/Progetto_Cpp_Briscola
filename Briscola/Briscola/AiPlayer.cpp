#include "aiplayer.h"

AiPlayer::AiPlayer() {
	mazzo.setDim(0);
}
AiPlayer::~AiPlayer() {

}
void AiPlayer::giocaCarta(int pos) {
	cartaGiocata = scegliCarta();
}

Carta AiPlayer::scegliCarta() {
	Carta a;

	int pos = rand() % mazzo.getDim();
	a = mazzo.getCarta(pos);
	return a;
}

void AiPlayer::setCarta(Carta& carta) {
	this->mazzo + carta;
}