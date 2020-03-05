#include <stdio.h>
#include <stdlib.h>

void initialise(int nb_amis,int nb_jours,int tab[ligne][colonne]){
  int i;
  int j;
  for(i=0;i<nb_amis;i++){
    for(j=0;j<nb_jours;j++){

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
int main(){
  int nb_amis=5;
  int nb_jours=7;
  int tab[nb_amis][nb_jours];
  initialise(nb_amis,nb_jours,tab);
  affichage(nb_amos,nb_jours,tab);
  return 0;

}
