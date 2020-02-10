#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define NB_VALEURS 1000
#define VMIN 0
#define VMAX 32000
int min;
int max;
void minimum_maximum(int val,int *min,int *max){
        *min= minimum(val,*min);
        *max=maximum(val,*max);
}
int main(){
    int i,val;
    int *min=VMAX, *max=VMIN;
    for (i=0; i < NB_VALEURS; i++) {
        val=valeur_aleatoire(VMIN,VMAX);
        minimum_maximum(val,&min,&max);
    }
    printf("MIN = %d, MAX = %d\n", *min,*max);
    return 0;
}