#include "player.h"

Player::Player() {
	mazzo.setDim(0);
}
Player::~Player() {

}

Napoletano Player::getMazzo() {
	return mazzo;
}

void Player::inizializza(Napoletano& mazzo) {
	for (int i = 0; i < 3; i++) {
		setCarta(--mazzo);
	}
}