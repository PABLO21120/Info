#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//question1
void initialise(int nb_amis,int nb_jours,float tab[nb_amis][nb_jours]){
  int i;
  int j;
  for(i=0;i<nb_amis;i++){
    for(j=0;j<nb_jours;j++){

    tab[i][j]=0;
}

}

}

void affichage(int ligne,int colonne,float tab[ligne][colonne]){
  int i=0;
  int j;
  printf("\n");
  while(i<colonne){
    printf(" \t%3d",i+1);
    i++;
  }
  printf("\n");
  printf("-----------------------------------------------------------------------");
  i=0;

  printf("\n");
  for(i=0;i<ligne;i++){
    printf("%d",i+1);
    for(j=0;j<colonne;j++){
      printf("\t%.1f",tab[i][j]);

    }

    printf("\n");
    printf("\n");
  }
  }
  //question2
  void aleatoire(int nb_amis,int nb_jours,float tab[nb_amis][nb_jours]){
    float montant;
    int payeur;
    float res;
    int i;
    int x=0;
    initialise(nb_amis,nb_jours,tab);

    for(i=0;i<nb_jours;i++){
      montant=rand()%(51-30)+30;
      payeur=rand()%(nb_amis+1-0)+0;
      printf("Jour %d : %d paye %.1f\n",i+1,payeur,montant);

      for(x=0;x<nb_amis;x++){



        if((payeur-1)==x){

          tab[x][i]=montant-(montant/nb_amis);
        }else{
          tab[x][i]=-(montant/nb_amis);
        }


      }

    }
    affichage(nb_amis,nb_jours,tab);

  }
//question4
float bills(int nb_amis,int nb_jours,float tab[nb_amis][nb_jours]){
  aleatoire(nb_amis,nb_jours,tab);
  int i;
  int j;
  float res;
  for(j=0;j<nb_amis;j++){
  for(i=0;i<nb_jours;i++){
      res+=tab[j][i];
    }
    printf("l'ami n°%d à un solde de %.1f\n",j+1,-res);

  }
  printf("si le montant est négatif cela veut dire que on lui doit de l'argent sinon il en doit !\n");

  return 0;
}

int main(){
  int j=4;
  int nb_amis=5;
  int nb_jours=7;
  float tab[nb_amis][nb_jours];
  bills(nb_amis,nb_jours,tab);
  srand(time(NULL));

  return 0;

}
