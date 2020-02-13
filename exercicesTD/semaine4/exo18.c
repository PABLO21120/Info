#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//question1
void declare(int *tab,int N){

    int i;
    for(i=0;i<N;i++){
        tab[i]=i+1;

    }
    
}
//question2
void init_alea(int *tab,int N,int min,int max){
    srand(time(NULL));
    int i;
    for(i=0;i<N;i++){
        tab[i]=rand()%((max+1)-min)+min;
        printf("%d\n",tab[i]);
    }
}
int main(){
    int Ni;
    int tab[Ni];
    declare(tab,10);

    init_alea(tab,10,2,13);
}