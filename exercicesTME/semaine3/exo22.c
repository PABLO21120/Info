#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NBQUILLES 10
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
void score(int *strike,int *spare) {
    printf("veuillez rentrer le nombre de quilles que vous avez fait tombé au premier lancer\n");
    int score1=lancer(NBQUILLES);
    printf("%d",score1);
    if(score1==NBQUILLES){
        *strike=1;
        *spare=0;
        printf("vous avez un strike %d !\n",*strike);
        return;

    }
    printf("Au premier lancer vous avez fait tomber %d quilles \n veuillez rentrer le nombre de quilles que vous avez fait tombé au second lancer\n",score1);
    int nbquilles=NBQUILLES;
    int score2=lancer(nbquilles-score1);
    int scoretot=score1+score2;
    if(scoretot==NBQUILLES){
        *spare=1;
        *strike=0;
        printf("vous avez un spare %d!\n",*spare);

    }
    else{
        printf("votre score est de %d !\n",scoretot);

    }

}
//question3
int tour (){
  int strike;
  int spare()
  int i;
    score(&strike,&spare);
  }



}
int main(){
  int strike;
  int spare;

  score(&strike,&spare);
}
