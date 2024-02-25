#include "aiplayer.h"

AiPlayer::AiPlayer() {

}
AiPlayer::~AiPlayer() {

}
bool AiPlayer::giocaCarta(int pos) {
	return true;
}
Carta AiPlayer::scegliCarta(Napoletano& deck) {
	Carta a;
	int pos = rand() % 3;
	a = mazzo.getCarta(pos);
	return a;
}

void AiPlayer::setCarta(Carta& carta) {
	mazzo + carta;
}