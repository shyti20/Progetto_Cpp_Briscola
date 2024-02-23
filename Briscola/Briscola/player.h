#ifndef PLAYER_H
#define PLAYER_H

#include "napoletano.h"

class Player {
	protected:
		Napoletano mazzo;
	public:
		Player();
		virtual ~Player();
		virtual bool giocaCarta(Carta carta) = 0;
		virtual void setCarta(Carta carta) = 0;
		Napoletano getMazzo();
};

#endif