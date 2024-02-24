#ifndef REALPLAYER_H
#define REALPLAYER_H

#include "player.h"

class RealPlayer : public Player {
	public:
		RealPlayer();
		~RealPlayer();
		bool giocaCarta(Carta carta);
		void setCarta(Carta carta);
		void inizializza(Napoletano& mazzo);
};

#endif
