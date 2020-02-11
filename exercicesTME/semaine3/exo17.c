#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NB_VALEURS 50
#define VMIN -20
#define VMAX 20

int valeur_aleatoire(int min, int max){
    int res;
    res=rand()%((max+1)-min)+min;;
    return res;
}
//question2
void pos_neg_zero(int res1,int *pos,int *neg,int *zero){
    if(res1>0){
        *pos+=1;
    }
    else if(res1<0){
        *neg+=1;
    }
    else{
        *zero+=1;
    }

}

int main(){

    int i;
    int res;
    int pos=0;
    int neg=0;
    int zero;
      srand(time(NULL));
    for(i=0;i<NB_VALEURS;i++){
        res=valeur_aleatoire(VMIN,VMAX);
        pos_neg_zero(res,&pos,&neg,&zero);
    }
    printf("il y a %d de nombres positifs, %d de nombres negatifs et %d de nombres nuls \n",pos,neg,zero);
  return 0;
}