#include "player.h"

Player::Player() {
	mazzo.setDim(3);
}
Player::~Player() {

}

Napoletano Player::getMazzo() {
	return mazzo;
}