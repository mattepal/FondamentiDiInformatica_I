#define _NO_SECURE_WARNINGS_CRT
#if !defined ORARI_H
#define ORARI_H

#include <stdint.h>
#include <stdlib.h>

struct orario {
    uint8_t ore;
    uint8_t minuti;
    uint8_t secondi;
};
struct orario differenza_orari(struct orario a, struct orario b);

#endif // !defined ORARI_H
