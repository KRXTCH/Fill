#include "interfaceGraphique.h"
#include <stdio.h>
#include "jeu.h"

int main (int argc, char** argv)
 {
     	creerFenetre ("FILL",  10*TAILLE,  10*TAILLE  );
	specifierLimites (    0 ,  10*TAILLE , 10*TAILLE ,  0 );  

  specifierGestionnaire ( "TOUCHE ENFONCEE"    , toucheEnfoncee      );
  specifierGestionnaire ( "TOUCHE RELACHEE"    , toucheRelachee      );
 

  initialiserJeu ();

  //afficherMenu();


  afficherJeu ();


  gererEvenements ();           

  detruireFenetre ();

  return 0;
 }
