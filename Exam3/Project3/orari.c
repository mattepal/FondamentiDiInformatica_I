#include "orari.h"

struct orario differenza_orari(struct orario a, struct orario b){
	struct orario fine;
	
	if (a.ore < b.ore) {
		fine.ore = 0xFF;
		fine.minuti= 0xFF;
		fine.secondi= 0xFF;
		return fine;
	}
	else if (a.ore==b.ore && a.minuti<b.minuti) {
		fine.ore = 0xFF;
		fine.minuti = 0xFF;
		fine.secondi = 0xFF;
		return fine;
	}
	else if(a.ore == b.ore && a.minuti==b.minuti&& a.secondi < b.secondi) {
		fine.ore = 0xFF;
		fine.minuti = 0xFF;
		fine.secondi = 0xFF;
		return fine;
	}
	if (a.secondi < b.secondi) {
			a.minuti -=1;
			fine.secondi = a.secondi + 60 - b.secondi;
	}
	else 
		fine.secondi = a.secondi - b.secondi;
	if (a.minuti < b.minuti) {
			a.ore -= 1;
			fine.minuti = a.minuti + 60 - b.minuti;
	}
	else
		fine.minuti = a.minuti - b.minuti;
	fine.ore = a.ore - b.ore;
	return fine;
}
