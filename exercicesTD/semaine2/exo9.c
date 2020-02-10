#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define KMIN 0
#define KMAX 15

//question1
int sommeDiviseurs(int a){
    int i;
    int res=0;
    for (i=1;i!=a;i++){
        if (a%i==0){
            res+=i;
        }
    }
    printf("la somme des diviseurs stricts est de %d\n",res);
    return res;
}
//question2

int k_parfait(int n,int k){
    int i=sommeDiviseurs(n)+n;
    if(i==k*n){
        return 1;
    }
    else{
        return 0;

    }
    }
//question3


int trouver_k_parfait(int n){
    int i;
    int k;
    int res=sommeDiviseurs(n)+n;
    for(i=KMIN;i<=KMAX;i++){
    if (res==n*i){
        k=i;
        return k;
        break;


    }


    }
    return -1;
}
int main(){
    sommeDiviseurs(10);
    sommeDiviseurs(20);
    sommeDiviseurs(30);
    assert(k_parfait(100,3)==0);
    assert(k_parfait(120,3)==1);
    assert(trouver_k_parfait(30240)==4);
    return 0;
}