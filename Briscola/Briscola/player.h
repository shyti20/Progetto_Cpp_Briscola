#ifndef PLAYER_H
#define PLAYER_H

#include "napoletano.h"

class Player {
	protected:
		Napoletano mazzo;
		Carta cartaGiocata;
	public:
		Player();
		virtual ~Player();
		virtual bool giocaCarta(int pos) = 0;
		virtual void setCarta(Carta& carta) = 0;
		void inizializza(Napoletano& mazzo);
		Napoletano& getMazzo();
};

#endif