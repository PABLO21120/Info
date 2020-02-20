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
if((temp>=0)&&(temp<=a)){
    res=NBQUILLES-temp;
    return res;
}
else{
while((res<0)||(res>a)){
printf("veuillez rentrer une valeur supérieure ou égale à 0\n");
scanf("%d",&temp);
}
}


return res;
}

//question2
void score(int *score,int *strike,int *spare){
    printf("vous etes au premier lancer !\n");
    int lancer1=lancer(NBQUILLES);
    int lancer2;
    if(lancer1==NBQUILLES){
        *score+=10;
        *strike=1;
        *spare=0;
        printf("vous avez fait un strike ! \n");

    }else{
      printf("vous etes au second lancer\n");
    lancer2=lancer(NBQUILLES);

    if(lancer1+lancer2==NBQUILLES){
        *score+=10;
        *strike=0;
        *spare=1;
        printf("vous avez fait un spare !\n");

    }
  }
  if(*strike==1){
    printf("vous avez fait un strike au tour precedent\n");

  }else if(*spare==1){
    printf("vous avez fait un spare au tour precedent\n");
  }
    lancer1=lancer(NBQUILLES);
    if((*strike==1)&&(lancer1!=NBQUILLES)){
      lancer2=lancer(NBQUILLES);
      if(lancer2!=(NBQUILLES-lancer1)){
        *score+=lancer1+lancer2;
        *strike=0;
        *spare=0;
      }else{
        *spare=1;
        *strike=0;
        *score+=10;
      }
    }




    if ((*spare==1) && (lancer1!=NBQUILLES) ){
        *score+=lancer1;
        *strike=0;
        *spare=0;

      }
    }
int main(){
        int strike;
        int spare;
        int score1;

        score(&score1,&strike,&spare);
      }
