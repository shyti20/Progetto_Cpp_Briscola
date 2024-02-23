#ifndef AIPLAYER_H
#define AIPLAYER_H

#include "player.h"

class AiPlayer : public Player {
	private:
	public:
		AiPlayer();
		~AiPlayer();
		bool giocaCarta(Carta carta);
		Carta scegliCarta();
		void setCarta(Carta carta);
};

#endif