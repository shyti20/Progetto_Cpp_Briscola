#include "player.h"

Player::Player() {
	Napoletano mazzo;
	Carta cartaGiocata;
	punteggio = 0;
}

Player::~Player() {

}

Napoletano& Player::getMazzo() {
	return mazzo;
}

Carta Player::getCartaGiocata() {
	return cartaGiocata;
}

void Player::setPunteggio(int punt) {
	punteggio = punt;
	if (punteggio < 0) {
		punteggio = 0;
	}
}

int Player::getPunteggio() {
	return punteggio;
}

