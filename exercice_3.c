/********************
 * --- DM3 Ex.3 --- *
 ********************/

#include <stdio.h>

   // répète le bloc suivant nb fois
#define repeat(nb) for(size_t _loop = 1, _max = nb; _loop <= _max; ++_loop)

int main () {

   /* variables nécessaires au programme */

      // argent sur le compte en banque au départ
   double compte = 0;
      // somme à payer ce jour-ci
   double cout = 0.01;
      // somme donnée par la banque
   double ajout = 100000;


   /* simulation des jours */

      // pour les 31 jours du mois
   repeat (31) {

         // on paye à la banque
      compte -= cout;
         // la banque nous paye
      compte += ajout;


         // si notre compte est négatif, c'est que au total l'affaire n'est pas rentable.
      if (compte < 0) {
            // on l"affiche
         printf ("********************************************\n");
         printf ("**  L'affaire n'est pas rentable.         **\n");
         printf ("**  On sera endetté à partir du jour %ld.  **\n", _loop);
         printf ("********************************************\n");

            // on quitte le programme
         return 0;
      }
      else {
            // affichage du jour
         printf ("jour %ld : \n", _loop);
         printf ("  -> compte : %f\n", compte);
         printf ("  -> cout : %f\n", cout);
         printf ("  -> ajout : %f\n\n", ajout);
      }

         // on devra payer 2 fois plus le prochain jour
      cout *= 2.;
         // la banque nous versera 100€ de plus le prochain jour
      ajout += 10000;
   }

   return 0;
}

