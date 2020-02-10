#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//AF: Question 5 exo 7

//question1



#define MAX 5
int premier(int a){
    int i;
    int prime=1;
    for(i=a-1;i>1;i--){
    if(a%i==0){
        prime=0;
        break;
        }
    }

    return prime;
}

//question4

int listeNombresPremiers(int n_max){
    int i;
    for (i=1;i<n_max;i++){
        premier(i);
        if(premier(i)==1){
            printf("voici le nombre premier %d parmis les %d premiers.\n",i,n_max);
        }
    }
    return 0;

}
int main(){
printf("%d\n",premier(5));
printf("%d\n",premier(10));
printf("%d",listeNombresPremiers(200));
return 0;
}
//question5
