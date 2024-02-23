#ifndef REALPLAYER_H
#define REALPLAYER_H

#include "player.h"

class RealPlayer : public Player {
	private:
	public:
		RealPlayer();
		~RealPlayer();
		bool giocaCarta(Carta carta);
		void setCarta(Carta carta);
};

#endif
