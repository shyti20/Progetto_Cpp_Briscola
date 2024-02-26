#ifndef REALPLAYER_H
#define REALPLAYER_H

#include "player.h"

class RealPlayer : public Player {
	public:
		RealPlayer();
		~RealPlayer();
		void giocaCarta(int pos);
		void setCarta(Carta& carta);
};

#endif
