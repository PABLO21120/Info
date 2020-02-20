#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NBQUILLES 10
#define NBTOURS 10
#define NBLANCERS 2
int lancer(int a){
  int temp;
  int res;
printf("veuillez rentrer le nombre de quilles encore debout\n");
scanf("%d",&temp);
if((res>=0)&&(res<=a)){
    res=NBQUILLES-temp;
    return res;;
}
else{
while((res<0)||(res>a)){
printf("veuillez rentrer une valeur supérieure ou égale à 0\n");
scanf("%d",&temp);
}
}


return res;
}

int lancer_aleatoire() {

  return 0;
}
//question2
void score(int *score,int *strike,int *spare) {
    printf("veuillez rentrer le nombre de quilles que vous avez fait tombé au premier lancer sur %d\n",NBQUILLES);
    int score1=lancer(NBQUILLES);
    printf("%d",score1);
    if(){
        *score+=10;
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
void tour (){
  int strike;
  int spare;
  int i;
  for(i=0;i<NBTOURS)
    score(&strike,&spare);
  }

int main(){
  int strike;
  int spare;

  score(&strike,&spare);
}
