#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NBTOURS 10
#define NBLANCERS 2
#define NBQUILLES 10

/* Il sera probablement n�cessaire de modifier les parametres et valeur de retour des fonctions
  lancer, lancer_aleatoire, score et jeu */

/* Les declarations actuelles permettent de compiler et d'executer le programme */
//question1
int lancer(int a){
  int res;
printf("veuillez rentrer une valeur supérieure ou égale à 0\n");
scanf("%d",&res);
if((res>=0)&&(res<=a)){
    return res;
}
else{
while((res<0)||(res>a)){
printf("veuillez rentrer une valeur supérieure ou égale à 0\n");
scanf("%d",&res);
}
}


return res;
}

int lancer_aleatoire() {

  return 0;
}
//question2
void score() {
    int *strike;
    int *spare;
    strike=0;
    spare=0;
    printf("veuillez rentrer le nombre de quilles que vous avez fait tombé au premier lancer\n");
    int score1=lancer(NBQUILLES);
    if(score1==NBQUILLES){
        *strike=1;
        *spare=0;
        printf("vous avez un strike %d !\n",*strike);

    }
    printf("Au premier lancer vous avez fait tomber %d quilles \n veuillez rentrer le nombre de quilles que vous avez fait tombé au second lancer\n",score1);
    int nbquilles=NBQUILLES;
    int score2=lancer(nbquilles-score1);
    int scoretot=score1+score2;
    if(scoretot==NBQUILLES){
        *spare=1;
        *strike=0;
        printf("vous avez un spare!\n");

    }
    else{
        printf("votre score est de %d\n",scoretot);

    }

}
//question3
void tour(){



}

int jeu() {
  return 0;
}

int main() {


    score();

  return 0;
}
