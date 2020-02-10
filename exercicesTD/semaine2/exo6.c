#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//question 1
int somme_carres(int m, int n){
    int s=0;
    int i=m;
    while(i<=n){

        s=s+(i*i);

        i=i+1;
    }
    return s;
}


//question 3
int somme_carres1(int m, int n){
    int s=0;
    int i;
    for(i=m;i<n+1;i++){
            s=s+(i*i);
    }
    return s;

}
//question 2
int main(){
    assert(somme_carres(1,5)==55);
    assert(somme_carres(2,5)==54);
    assert(somme_carres(3,5)==50);
    assert(somme_carres(4,5)==41);
    assert(somme_carres1(1,5)==55);
    assert(somme_carres1(2,5)==54);
    assert(somme_carres1(3,5)==50);
    assert(somme_carres1(4,5)==41);
    return 0;

}
