#ifndef JEU_H_INCLUDED
#define JEU_H_INCLUDED

#define TAILLE 50

#define NORD 0
#define EST 1
#define SUD 2
#define OUEST 3

#include <stdint.h>

void mur           ( int x, int y);
void murH          ( int x, int y);
void murC          ( int x, int y);
void block         ( int x, int y);
void coinHG        ( int x, int y);
void coinHD        ( int x, int y);
void coinBG        ( int x, int y);
void coinBD        ( int x, int y);
void joueur        ( int x, int y);
void trace         ( int x, int y);
void afficherSol   ( int x, int y);

int verif_mvmt ();
int verif_mvmt_2 ();


void afficherJeu ();
void afficherJeu_de ();

void afficherMenu ();

void initialiserJeu ();

void toucheEnfoncee ( uint64_t a , uint64_t b , uint64_t c);

void toucheRelachee ( uint64_t a , uint64_t b , uint64_t c);

#endif // JEU_H_INCLUDED
