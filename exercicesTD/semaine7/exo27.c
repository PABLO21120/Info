#include <stdio.h>
#include<stdlib.h>
#define TAILLE_STOCK 40
//question1

struct article{
  int reference;
  float prix;
  int quantite;
};
//question2
void initialise(struct article *stock){

  int i;
  for(i=0;i<TAILLE_STOCK;i++){
    stock[i].reference=rand()%(2000-1500)+1500;
    stock[i].prix=rand()%(200-120)+120;
    stock[i].quantite=rand()%(40-20)+20;
    printf("%d.Article n°%d\n Prix : %.1f\n Quantite : %d\n",i+1,stock[i].reference,stock[i].prix,stock[i].quantite);

  }
}
void affichage(struct article *stock){
  int i;
  for(i=0;i<TAILLE_STOCK;i++){
    printf("%d. Article n°%d\n Prix : %.1f\n Quantite : %d\n",i+1,stock[i].reference,stock[i].prix,stock[i].quantite);
  }
}
//question3
void augmentationPrix(struct article *stock,int augmentation,int reference){
  int i;
  for(i=0;i<TAILLE_STOCK;i++){
    if(stock[i].reference==reference){
      stock[i].prix+=augmentation;
    }
  }

}
//question4

void augmentationGenerale(struct article *stock,int augmentation){
  int i;
  for(i=0;i<TAILLE_STOCK;i++){
      stock[i].prix+=augmentation;
  }

}
//question5
int validationReferences(struct article *stock){
  int i;
  int j;
  int returne;
  for(i=0;i<TAILLE_STOCK;i++){
    for(j=0;j<TAILLE_STOCK;j++){
      while(stock[i].reference!=stock[j].reference){
        return 1;
      }
    }
  }
  return 0;
}

int main(){
  struct article stock[TAILLE_STOCK];
  int augmentation=20;
  int reference=1899;
  initialise(stock);
  augmentationGenerale(stock,augmentation);
  affichage(stock);
  printf("%d",validationReferences(stock));

}
