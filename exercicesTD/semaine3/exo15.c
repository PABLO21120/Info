#include <stdio.h>
#include <assert.h>

void permute(int *a, int *b){
        int temp;
        temp=*a;
        *a=*b;
        *b=temp;

}

void permute_circulaire(int *a, int *b,int *c){
        int temp;
        temp=*a;
        int tempc=*c;
        permute(a,c);
        *a=temp;
        temp=*b;
        permute(a,b);
        *b=temp;
        permute(b,&tempc);

}

int main(){
    int a=10;
    int b=20;
    int c=30;
//    printf("avant appel : a=%d et b=%d\n",a,b);
//    permute(&a,&b);
//    printf("apres appel a=%d et b=%d\n",a,b);

    printf("avant appel : a=%d, b=%d et c =%d\n",a,b,c);
    permute_circulaire(&a,&b,&c);
    printf("apres appel a=%d, b=%d et c =%d\n",a,b,c);
    return 0;
}