#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NBTOURS 10
#define NBLANCERS 2
#define NBQUILLES 10

/* Il sera probablement n�cessaire de modifier les parametres et valeur de retour des fonctions
  lancer, lancer_aleatoire, score et jeu */

/* Les declarations actuelles permettent de compiler et d'executer le programme */

int lancer(int *temp) {
  int res=0;

  printf("Veuillez rentrer le nombre de quilles encore debout.\n");

  scanf("%d",&res);

  while((res>*temp)||(res<0)){

    printf("veuillez rentrer une valeur comprise entre 0 et %d ! \n",*temp);
    scanf("%d",&res);

  }
  *temp=res;

  res=NBQUILLES-res;
  return res;
}

int lancer_aleatoire() {
  return 0;
}

void score(int *score1,int *strike,int *spare,int *temp,int lancer1) {

  if((*strike==0)&&(*spare==0)){
    *score1 = lancer1;
  }
  else if(*strike==1){
    *score1 +=10;

  }

  else if(*spare==1){
    *score1 = lancer1;

  }


}

void tour(int *score1,int *strike,int *spare,int *temp){

  printf("Vous êtes au lancer n°1\n");
      /*lancer n°1*/ int lancer1=lancer(temp);
      if(lancer1==NBQUILLES){
        *strike=1;
        *spare=0;

        score(score1,strike,spare,temp,lancer1);
        printf("ST: %d SP: %d \n",*strike,*spare);

        printf("vous avez fait un strike !\n");
        printf("%d\n",*temp);
        return;
      }
      score(score1,strike,spare,temp,lancer1);
      printf("ST: %d SP: %d \n",*strike,*spare);

      printf("votre score est de %d, il vous reste %d quilles à faire tomber pour faire un spare!\n",*score1,*temp);
      printf("Vous êtes au lancer n°2\n");

      /*lancer n°2*/ int lancer2=lancer(temp);
      printf("%d lancer2\n",lancer2);
       if(lancer2==NBQUILLES){

        *spare=1;
        *strike=0;
        score(score1,strike,spare,temp,lancer2);
        *score1+=lancer2;
        printf("ST: %d SP: %d \n",*strike,*spare);
        printf("vous avez fait un spare ! Votre score est donc de %d \n",*score1);


      }
      else{
        *strike=0;
        *spare=0;
        *score1+=lancer2;

        score(score1,strike,spare,temp,lancer2);

        printf("A l'issu de ce tour le score est de %d ! \n",*score1);
      }


}


int jeu(int *score1,int *strike,int *spare,int *temp) {

  int i;
  for(i=0;i<NBTOURS;i++){
    *temp=NBQUILLES;
    printf("TOUR %d \n",(i+1));
    tour(score1,strike,spare,temp);
  }
  while(*strike==1){
    printf("Tour supplementaire \n");
    tour(score1,strike,spare,temp);

  }

  return *score1;
}

int main() {
  int res;
  int score1=0;
  int strike=0;
  int spare=0;
  int temp=NBQUILLES;
  int tour=0;

  srand(time(NULL));
  //score(&score1,&strike,&spare,&temp);
  jeu(&score1,&strike,&spare,&temp);
  return 0;
}
