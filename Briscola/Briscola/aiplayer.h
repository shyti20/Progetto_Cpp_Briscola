#ifndef AIPLAYER_H
#define AIPLAYER_H

#include "player.h"

class AiPlayer : public Player {
	private:
	public:
		AiPlayer();
		~AiPlayer();
		bool giocaCarta(int pos);
		Carta scegliCarta(Napoletano& deck);
		void setCarta(Carta& carta);
};

#endif