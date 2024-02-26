#ifndef PLAYER_H
#define PLAYER_H

#include "napoletano.h"

class Player {
	protected:
		Napoletano mazzo;
		Carta cartaGiocata;
		int punteggio;
	public:
		Player();
		virtual ~Player();
		virtual void giocaCarta(int pos) = 0;
		virtual void setCarta(Carta& carta) = 0;
		void inizializza(Napoletano& mazzo);
		Napoletano& getMazzo();
		Carta getCartaGiocata();
		int getPunteggio();
		void setPunteggio(int punt);
};

#endif