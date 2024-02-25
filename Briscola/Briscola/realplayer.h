#ifndef REALPLAYER_H
#define REALPLAYER_H

#include "player.h"

class RealPlayer : public Player {
	public:
		RealPlayer();
		~RealPlayer();
		bool giocaCarta(int pos);
		void setCarta(Carta& carta);
		Napoletano inizializzaPlayer(Napoletano mazzoCarte);
		void test(Napoletano n);
};

#endif
