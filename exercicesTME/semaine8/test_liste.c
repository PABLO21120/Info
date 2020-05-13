#include "liste_entiers.h"
#include <stdio.h>

int main() {
 //question1
    //----------------------------------------------------

printf("Question 1\n");
  cellule_t *ma_liste=creerListe(5);
  cellule_t *mycellule=NULL;
  AfficherListeInt(ma_liste);
  printf("veuillez rentrer une valeur dont vous voulez connaître l'occurence \n");
  int val;
  int val1;
  scanf("%d",&val);
  printf("%d occurences\n",nb_occurences(val, ma_liste));
   //question2
    //----------------------------------------------------
printf("Question 2\n");
  printf("veuillez rentrer une valeur dont vous voulez savoir si les valeurs sont tous plus grandes \n");
  scanf("%d",&val1);

  printf("tous plus grand ? %d\n",tous_plus_grand(val1, ma_liste));
 //question3
    //----------------------------------------------------
printf("Question 3\n");
   mycellule=Maximum(ma_liste);
printf("le maximum de ma liste est : %d\n",mycellule->donnee);
 //question4
    //----------------------------------------------------
printf("Question 4\n");

    int pos;
    printf("choississez la position de la valeur que vous souhaitez afficher \n");
    scanf("%d",&pos);
    printf("en position %d, la valeur est %d \n",pos,Renvoyer_val_element_pos(pos-1, ma_liste));
    //question5
    //----------------------------------------------------


    printf("Question 5\n");
    cellule_t *ma_liste1=creerListe(2);
    cellule_t *ma_liste2=creerListe(3);
    Concatener_it(ma_liste1, ma_liste2);
    AfficherListeInt(ma_liste1);
     //question6
     printf("Question 6\n");
    //----------------------------------------------------

     printf("%d\n",nb_maximum(ma_liste1));
  return 0;

}