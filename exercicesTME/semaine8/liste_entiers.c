#include <stdio.h>
#include <stdlib.h>
#include "liste_entiers.h"

cellule_t * creerListe(int n) {
/* cree une liste de n entiers saisi par l'utilisateur
  renvoie l'adresse du premier element de la liste */
  int i;
  int val;
  cellule_t *tete=NULL;
  cellule_t *ptr;
  
  printf("Saisie des %d elements de la liste\n",n);
  for (i=0; i < n; i++) {
    printf("Element %d :",i+1);
    scanf("%d",&val);
    ptr=malloc(sizeof(cellule_t));
    ptr->donnee = val;
    ptr->suivant = tete;
    tete = ptr;
  }
  return tete;
}
void AfficherListeInt(cellule_t *liste){
    int i=1;
    if(liste==NULL){
    exit(EXIT_FAILURE);
    }

    while(liste){
    printf("%d) %d\n",i,liste->donnee);
    liste=liste->suivant;
    i=i+1;

    }

}
//question1
int nb_occurences(int val, cellule_t *liste){
    int res=0;
    if(liste==NULL){
        exit(EXIT_FAILURE);
    }
    while(liste){
        if (liste->donnee==val){
            res+=1;

        }
        liste=liste->suivant;

    }
    return res;
}
//question2


int tous_plus_grand(int val, cellule_t *liste){

    while(liste!=NULL){
    while(liste->donnee>val){
        return tous_plus_grand(val,liste->suivant);
    }
    if(liste->donnee<val){
    return 0;
    }
    }
    return 1;
}
//question3
cellule_t* Maximum(cellule_t *liste){
    cellule_t *res=liste;
    res->donnee=0;
    if(liste==NULL){
        exit(EXIT_FAILURE);
   }
    while(liste->suivant!=NULL){
        if((res->donnee)<(liste->donnee)){
            res=liste;
        }
        liste=liste->suivant;

    }
     return res;
}
//question4

int Renvoyer_val_element_pos(int pos, cellule_t* liste){
    if(liste==NULL){
        exit(EXIT_FAILURE);
   }
   int i;
   int res=liste->donnee;
    for(i=0;i<pos;i++){
        liste=liste->suivant;
    }
    res=liste->donnee;
    return res;

}
//question 5
cellule_t *Concatener_it(cellule_t *liste1, cellule_t *liste2){
    if(liste1==NULL){
        return liste2;
   }

   if(liste2==NULL){
        return liste1;
   }
    if((liste1==NULL)&&(liste2==NULL)){
        return NULL;
   }
    while(liste1->suivant!=NULL){
    printf("%d\n",liste1->donnee);
        liste1=liste1->suivant;

    }
    liste1->suivant=liste2;
    return liste1;



}
//question6
int nb_maximum(cellule_t *liste){
    int a=Maximum(liste)->donnee;
    printf("ta race %d\n",a);
    int cmpt=0;
    while(liste->suivant!=NULL){
        if(a==liste->donnee){
        printf("%d=%d\n",a,liste->donnee);
        cmpt+=1;
        }
    }
    printf("cmpt = %d\n",cmpt);
    return cmpt;


}