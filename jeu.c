#include "jeu.h"
#include <stdio.h>
#include <stdlib.h>
#include "interfaceGraphique.h"


char aireDeJeu[8][10] = { "(--------)" ,
                          "/      ++/" ,
                          "/++      /" ,
                          "/+       /" ,
                          "/    ++  /" ,
                          "/ +   + +/" ,
                          "/     + J/" ,
                          "[--------]" };


char aireDeJeu_de[9][8] = {  "(------)" ,
                             "/++  ++/" ,
                             "/+     /" ,
                             "/+ + + /" ,
                             "/  +J+ /" ,
                             "/    + /" ,
                             "/ ++   /" ,
                             "/    ++/" ,
                             "[------]" };



void afficherMenu ()
{
  dessinerImage (   1,      // Abscisse du coin inférieur gauche (inversé a cause des limites)
                     1,   // Ordonnee du coin inférieur gauche (inversé a cause des limites)
                   1, 1,  8           );      // Numero de l'image
}

void mur (int x, int y)
 {

  dessinerRectangle ( x    * TAILLE ,  y    * TAILLE, // Abscisse et ordonnée du coin supérieur gauche
                     (x+1) * TAILLE , (y+1) * TAILLE, // Abscisse et ordonnée du coin inférieur droit
                      0,                                  // Proportion de rouge pour le trait de délimitation (entre 0 et 1)
                      0,                                  // Proportion de vert  pour le trait de délimitation (entre 0 et 1)
                      1,                                  // Proportion de bleu  pour le trait de délimitation (entre 0 et 1)
                      101,                                  // Proportion de rouge pour l'intérieur du rectangle (-1 signifie pas de remplissage)
                      31,                                  // Proportion de vert  pour l'intérieur du rectangle (-1 signifie pas de remplissage)
                      255);                              // Proportion de bleu  pour l'intérieur du rectangle (-1 signifie pas de remplissage)
 }

void murH( int x, int y)
 {
  dessinerImage (  x    * TAILLE ,       // Abscisse du coin inférieur gauche (inversé a cause des limites)
                  (y+1) * TAILLE ,       // Ordonnee du coin inférieur gauche (inversé a cause des limites)
                   1, 1,  0           );      // Numero de l'image
 }

void murC( int x, int y)
 {
  dessinerImage (  x    * TAILLE ,       // Abscisse du coin inférieur gauche (inversé a cause des limites)
                  (y+1) * TAILLE ,       // Ordonnee du coin inférieur gauche (inversé a cause des limites)
                   1, 1, 1           );      // Numero de l'image
 }

 void block( int x, int y)
 {
  dessinerImage (  x    * TAILLE ,       // Abscisse du coin inférieur gauche (inversé a cause des limites)
                  (y+1) * TAILLE ,       // Ordonnee du coin inférieur gauche (inversé a cause des limites)
                   1, 1, 2           );      // Numero de l'image
 }

 void coinHG( int x, int y)
 {
  dessinerImage (  x    * TAILLE ,       // Abscisse du coin inférieur gauche (inversé a cause des limites)
                  (y+1) * TAILLE ,       // Ordonnee du coin inférieur gauche (inversé a cause des limites)
                   1, 1, 3          );      // Numero de l'image
 }

 void coinHD( int x, int y)
 {
  dessinerImage (  x    * TAILLE ,       // Abscisse du coin inférieur gauche (inversé a cause des limites)
                  (y+1) * TAILLE ,       // Ordonnee du coin inférieur gauche (inversé a cause des limites)
                   1, 1, 4           );      // Numero de l'image
 }

 void coinBG( int x, int y)
 {
  dessinerImage (  x    * TAILLE ,       // Abscisse du coin inférieur gauche (inversé a cause des limites)
                  (y+1) * TAILLE ,       // Ordonnee du coin inférieur gauche (inversé a cause des limites)
                   1, 1, 5           );      // Numero de l'image
 }

 void coinBD( int x, int y)
 {
  dessinerImage (  x    * TAILLE ,       // Abscisse du coin inférieur gauche (inversé a cause des limites)
                  (y+1) * TAILLE ,       // Ordonnee du coin inférieur gauche (inversé a cause des limites)
                   1, 1, 6           );      // Numero de l'image
 }

 void joueur( int x, int y)
 {
  afficherSol(x,y);

  dessinerImage (  x    * TAILLE ,       // Abscisse du coin inférieur gauche (inversé a cause des limites)
                  (y+1) * TAILLE ,       // Ordonnee du coin inférieur gauche (inversé a cause des limites)
                   1, 1, 7          );      // Numero de l'image
 }

 
 void afficherSol (int x, int y)
 {
  dessinerRectangle ( x    * TAILLE ,    y  * TAILLE, // Abscisse et ordonn�e du coin sup�rieur gauche
                     (x+1) * TAILLE , (y+1) * TAILLE, // Abscisse et ordonn�e du coin inf�rieur droit
                      0,                                  // Proportion de rouge pour le trait de d�limitation (entre 0 et 1)
                      0,                                  // Proportion de vert  pour le trait de d�limitation (entre 0 et 1)
                      0,                                  // Proportion de bleu  pour le trait de d�limitation (entre 0 et 1)
                      0,                                  // Proportion de rouge pour l'int�rieur du rectangle (entre 0 et 1)
                      0,                                  // Proportion de vert  pour l'int�rieur du rectangle (entre 0 et 1)
                      0);                                // Proportion de bleu  pour l'int�rieur du rectangle (entre 0 et 1)

}

void trace (int x, int y)
 {
  dessinerRectangle ( x    * TAILLE ,    y  * TAILLE, // Abscisse et ordonn�e du coin sup�rieur gauche
                     (x+1) * TAILLE , (y+1) * TAILLE, // Abscisse et ordonn�e du coin inf�rieur droit
                      0,                                  // Proportion de rouge pour le trait de d�limitation (entre 0 et 1)
                      0,                                  // Proportion de vert  pour le trait de d�limitation (entre 0 et 1)
                      0,                                  // Proportion de bleu  pour le trait de d�limitation (entre 0 et 1)
                      1,                                  // Proportion de rouge pour l'int�rieur du rectangle (entre 0 et 1)
                      1,                                  // Proportion de vert  pour l'int�rieur du rectangle (entre 0 et 1)
                      1);                                // Proportion de bleu  pour l'int�rieur du rectangle (entre 0 et 1)

}


 void initialiserJeu ()
  {
   chargerImageBMP ( "./images/murH.bmp"         );  
   chargerImageBMP ( "./images/murC.bmp"         );  
   chargerImageBMP ( "./images/block.bmp"         );
   chargerImageBMP ( "./images/coinHG.bmp"         );
   chargerImageBMP ( "./images/coinHD.bmp"         );
   chargerImageBMP ( "./images/coinBG.bmp"         );
   chargerImageBMP ( "./images/coinBD.bmp"         );
   chargerImageBMP ( "./images/joueur.bmp"         );
   chargerImageBMP ( "./images/menu.bmp"           );     

  }


 int initJ = 0;

 int xj=0;
 int yj=0;

 int dimx = 10;
 int dimy = 10;

 int xt = 0;
 int yt = 0;

 int coup_max_1 = 21;	
 int coup_maxx = 17;

 int nivo = 0;

 int i = 0;
 int c = 0;

 void afficherJeu()
 {
   if ( nivo == 0 )
  {
     int x;
     int y;

      for (x=0; x<dimx; x++)
      {
        for(y=0; y<dimy; y++)
        {
          
            switch(aireDeJeu[y][x])
            {

                case '#' : mur(x,y);
                break;

                case '+' : block(x,y);
                break;

                case '-' : murH(x,y);
                break;

                case '/' : murC(x,y);
                break;

                case '(' : coinHG(x,y);
                break;

                case ')' : coinHD(x,y);
                break;

                case '[' : coinBG(x,y);
                break;

                case ']' : coinBD(x,y);
                break;

                case 'J' : afficherSol(x,y);
			                 if (!initJ)
                  	    {
                   	     xj = x;
                   	     yj = y;
                             xt = x;
                             yt = y;
                   	     initJ=1;
                   	    }
                           aireDeJeu[y][x]= 't';
                 	   break;

            }
         }
	 trace(xt,yt);
         joueur(xj,yj);   
        }
   } 
 }

int verif_mvmt()
{
  int v=0;
  int x;
  int y;
  for (x=0; x<10; x++)
      {
        for(y=0; y<10; y++)
        {
          
                if (aireDeJeu[y][x] == 't')
		{
			v++;
			
			
	        }
	    
	 }
      }
   return v;
}

int verif_mvmt_2()
{
  int v=0;
  int x;
  int y;
  for (x=0; x<10; x++)
      {
        for(y=0; y<10; y++)
        {
          
                if (aireDeJeu_de[y][x] == 't')
		{
			v++;
			
			
	        }
	    
	 }
      }
   return v;
}



void deplacerJoueur (int dir)
 {
  if (nivo == 0)
  {
  switch (dir)
   {
    case NORD : while ((aireDeJeu[yj+1][xj] == ' ')||(aireDeJeu[yj+1][xj] == 't'))
		{
 		 trace(xj,yj++);
		 aireDeJeu[yj][xj] = 't';
                } 		
		
	        break;

    case EST   :while ((aireDeJeu[yj][xj+1] == ' ')||(aireDeJeu[yj][xj+1] == 't'))
		{
 		 trace(xj++,yj);
		 aireDeJeu[yj][xj] = 't';
                }
	        break;

    case SUD   :while ((aireDeJeu[yj-1][xj] == ' ')||(aireDeJeu[yj-1][xj] == 't'))
		{
 		 trace(xj,yj--);	
		 aireDeJeu[yj][xj] = 't';
     		}
	        break;

    case OUEST :while ((aireDeJeu[yj][xj-1] == ' ')||(aireDeJeu[yj][xj-1] == 't'))
		{
 		 trace(xj--,yj);
		 aireDeJeu[yj][xj] = 't';
		}
	        break;

   }
  }
  i = verif_mvmt();
  // printf("%d\n",i);        Affichage du remplissage de l'air de jeu #1
  afficherJeu ();
 }


void deplacerJoueur_de (int dir)
 {
  switch (dir)
   {
     case NORD : while ((aireDeJeu_de[yj+1][xj] == ' ')||(aireDeJeu_de[yj+1][xj] == 't'))
		{
 		 trace(xj,yj++);
		 aireDeJeu_de[yj][xj] = 't';
                 } 		
		
	         break;

    case EST   :while ((aireDeJeu_de[yj][xj+1] == ' ')||(aireDeJeu_de[yj][xj+1] == 't'))
		{
 		 trace(xj++,yj);
		 aireDeJeu_de[yj][xj] = 't';
                 }
	         break;

    case SUD   :while ((aireDeJeu_de[yj-1][xj] == ' ')||(aireDeJeu_de[yj-1][xj] == 't'))
		{
 		 trace(xj,yj--);	
		 aireDeJeu_de[yj][xj] = 't';
     		}
	         break;

    case OUEST :while ((aireDeJeu_de[yj][xj-1] == ' ')||(aireDeJeu_de[yj][xj-1] == 't'))
		{
 		 trace(xj--,yj);
		 aireDeJeu_de[yj][xj] = 't';
		}
	        break;

   }
   c = verif_mvmt_2();
   printf("%d\n",c);        //Affichage du remplissage de l'air de jeu #2
   afficherJeu_de ();
 }


void toucheEnfoncee ( uint64_t a , uint64_t b , uint64_t c)
 {
  //printf ("toucheEnfoncee      => a=%lu, b=%lu et c=%lu\n" , a, b, c);

  switch (a)
   {
    case 98 :  if (nivo == 1)deplacerJoueur_de ( SUD);
	       else {deplacerJoueur (SUD);}
               break;

    case 102 :if (nivo == 1)deplacerJoueur_de ( EST);
	       else {deplacerJoueur (EST);}
               break;

    case 104 : if (nivo == 1)deplacerJoueur_de ( NORD);
	       else {deplacerJoueur (NORD);}
               break;

    case 100 : if (nivo == 1)deplacerJoueur_de ( OUEST);
	       else {deplacerJoueur (OUEST);}
               break;

    case  108 : afficherJeu();
               break;

    case   36 : afficherJeu();

               arreterGestionEvenements ();

               break;
   }
 }


void toucheRelachee ( uint64_t a , uint64_t b , uint64_t c)
 {
  //printf ("toucheRelachee      => a=%lu, b=%lu et c=%lu\n" , a, b, c);
 

	if ( nivo == 0 )
	{
	 coup_max_1--;
	 printf ("coup restant : %d\n", coup_max_1);
	}
	else
	{
	 coup_maxx--;
	 printf ("coup restant 2222 : %d\n", coup_maxx);
	}

	if ( coup_max_1== 0 )
	{
	 printf("~~ GAME OVER ~~\n");
	 detruireFenetre ();
	}

	if ( i==37 && coup_max_1 >0 )
	{
	 i = 0;
	 coup_max_1 = 21;
	 printf(" ~~ VOUS AVEZ GAGNER !! ~~\n");
	 nivo = 1;
         effacerDessin();
         afficherJeu_de();
 
	}

	if ( coup_maxx == 0 )
	{
	 printf("~~ GAME OVER ~~\n");
	 detruireFenetre ();
	}

	if ( c==29 && coup_maxx > 0 )
	{
	 printf(" ~~ VOUS AVEZ GAGNER !! ~~\n");
	 detruireFenetre ();
	}

 }


void afficherJeu_de()
 {
     int x;
     int y;

      for (x=0; x<dimx; x++)
      {
        for(y=0; y<dimy; y++)
        {
          
            switch(aireDeJeu_de[y][x])
            {

                case '#' : mur(x,y);
                break;

                case '+' : block(x,y);
                break;

                case '-' : murH(x,y);
                break;

                case '/' : murC(x,y);
                break;

                case '(' : coinHG(x,y);
                break;

                case ')' : coinHD(x,y);
                break;

                case '[' : coinBG(x,y);
                break;

                case ']' : coinBD(x,y);
                break;

                case 'J' : afficherSol(x,y);
			                 if (!initJ)
                  	    {
                   	     xj = x;
                   	     yj = y;
                             xt = x;
                             yt = y;
                   	     initJ=1;
                   	    }
                           aireDeJeu_de[y][x]= 't';
                 	   break;
            }
         }
	 trace(xt,yt);
         joueur(xj,yj);   
        }
   
 }

