#include <stdio.h>
#include <stdlib.h>

void f(int a,int *b){
    printf("%d,%d\n",a,*b);
    *b=*b+a;
    printf("%d,%d\n",a,*b);

}
int main(){
    int x=6;
    f(x,&x);
        printf("%d\n",x);
    f(x,&x);
    printf("%d",x);



}