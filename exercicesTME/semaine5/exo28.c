#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NB_AMIS 20
//question1
void initialise(int ligne,int colonne,int tab[ligne][colonne]){
  int i;
  int j;
  for(i=0;i<ligne;i++){
    for(j=0;j<colonne;j++){

    tab[i][j]=0;
}

}

}
void affichage(int ligne,int colonne,int tab[ligne][colonne]){
  int i;
  int j;
  for(i=0;i<ligne;i++){
    for(j=0;j<colonne;j++){
      printf("%4d",tab[i][j]);
    }
    printf("\n");
  }
  }



void ajout(int nb_jours,int nb_amis,int tab[nb_jours][nb_amis]){
  initialise(nb_jours,nb_amis,tab);
  int amis;
  int jours;
  int prix;
  int i;
  printf("veuillez rentrer la personne qui a effectué les dépenses \n");
  scanf("%d",&amis);
  printf("veuillez rentrer le jour ou la dépense à ete effectué  \n");
  scanf("%d",&jours);
  printf("veuillez rentrer le montant de la dépense \n");
  scanf("%d",&prix);
  tab[jours][amis]=prix-(prix/(nb_amis-1));
  for(i=0;i<nb_amis;i++){

      printf("helloworld\n");
      printf("%d, %d\n",amis,i);
      if(i!=amis){
        tab[jours][i]=-(prix/(nb_amis-1));


      }


  }
  affichage(nb_jours,nb_amis,tab);
}
//question2
void aleatoire(int j,int nb_jours,int nb_amis,int tab[nb_jours][nb_amis]){
  initialise(nb_jours,nb_amis,tab);
    int montant;
    int amis;

  int i;

  tab[j][amis]=montant-(montant/(nb_amis-1));
  for(i=0;i<nb_jours;i++){
    montant=rand()%(51-30)+30;
     amis=rand()%(nb_amis+1-0)+0;
      printf("Jour %d : %d paye %d \n",i+1,amis,montant);
      tab[j][amis]=montant-(montant/(nb_amis-1));
      if(i!=amis){
        tab[j][i]=-(montant)/(nb_amis-1);

      }

    }


  printf("%d,%d\n",montant,amis);
  affichage(nb_jours,nb_amis,tab);


}
int main(){
  int ligne=6;
  int colonne=8;
  int j;
  printf("veuillez rentrer le jour ou la dépense à ete effectué  \n");
  scanf("%d",&j);
  int tab[ligne][colonne];
  srand(time(NULL));
  aleatoire(j,ligne,colonne,tab);


}
