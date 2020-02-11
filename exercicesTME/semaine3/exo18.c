#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
//question1

void echange(int *a,int *b){
    int res;
    res=*a;
    *a=*b;
    *b=res;

    }
//question2
int tri(int *a,int *b){
    if(*a>*b){
        echange(a,b);
    }
    printf("%d,%d\n",*a,*b);
    return 0;
}

int tri_3(int *a,int *b,int *c){
        tri(a,b);
        tri(a,c);
        tri(b,c);
        printf("%d,%d,%d\n",*a,*b,*c);
        return 0;



}
int main(){
    int a=10;
    int b=1;
    int c=-1;
    tri(&a,&b);
    tri_3(&a,&b,&c);
    return 0;
}