//question1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void affiche(int *tab,int N){
    int i;
    for(i=0;i<N;i++){
        tab[i]=i+1;
        printf("%d\n",tab[i]);
    }

}
//question2
void init_alea(){

}
int main(){
    int N=4;
    int tab[N];

    affiche(tab,N);
}