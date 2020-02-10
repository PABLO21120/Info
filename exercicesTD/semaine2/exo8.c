#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//question1

int decomposition_somme(int somme){
    int s=0;
    int s5=0;
    int s2=0;
    int s1=0;
    while((s+5)<=somme){
        s5+= 1;
        s= s+5;

    }

    while((s+2<=somme)){
        s2+= 1;
        s= s+2;
    }
    while(s<somme){
        s1+= 1;
        s= s+1;
    }

    printf("la somme %d se décompose en %d billets de 5, %d pièces de 2 et %d pièces de 1!\n",somme,s5,s2,s1);
    return 0;
}

int main(){
    printf("hello ", decomposition_somme(137));
    decomposition_somme(100);
    decomposition_somme(126);
    decomposition_somme(2000);
    decomposition_somme(5558);
    decomposition_somme(3787);

    return 0;

}