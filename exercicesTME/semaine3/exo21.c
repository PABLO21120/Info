//question1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PIERRE 1
#define FEUILLE PIERRE+1
#define CISEAUX FEUILLE+1
#define NBESSAIS 3
#define POINTSGAGNANTS 3

  /* Il sera probablement n�cessaire de modifier les parametres et valeur de retour des fonctions
    choix_ordinateur, choix_joueur, score et jeu */

  /* Les declarations actuelles permettent de compiler et d'executer le programme */

void affichage_objet(int obj){
  /* hypoth�se : obj = PIERRE ou
     obj = FEUILLE ou obj = CISEAUX

   affiche le nom de l'objet correspondant � obj */

  if (obj == PIERRE){
    printf("PIERRE");
  } else {
    if (obj == FEUILLE){
      printf("FEUILLE");
    } else {
      printf("CISEAUX");
    }
  }
}
//question1//
int choix_ordinateur() {

    int res= rand()%(4-1)+1;
    return res;
}
//question2//
#define CHANCE 3

int choix_joueur(){
    int saisie;
    int chance=CHANCE;
    int i=chance;
    while(i>0){
        printf("veuillez saisir un nombre entre 1 et 3\n");
        scanf("%d",&saisie);
        printf("%d\n",saisie);
        if((saisie!=1)&&(saisie!=2)&&(saisie!=3)){
            i=i-1;
            printf("vous avez choisis un chiffre different,il vous reste %d chances\n",i);

        }else{
            return saisie;

        }
    }
    return -1;



}

void score(int choixj,int choixo ,int *scj,int *sco){

    if(choixj>choixo){
        scj+=1;
        sco=sco;
    }
    else if(choixj<choixo){
        scj=scj;
        sco=sco+1;
    }
     printf("Le score est de %d - %d\n",scj,sco);


}


void jeu() {
  /* boucle de jeu, la partie s'arr�te d�s qu'un des deux joueurs
   atteint POINTSGAGNANTS points */
}

int main() {
    srand(time(NULL));
    choix_joueur();


  return 0;
}