#include <stdio.h>
#include <stdlib.h>

//question1

void ma_fonction(int v1, int v2) {
        int a;
        int b;
        int *res=NULL;
        int *res1=NULL;
        res=&a;

        *res=v1;

        res1=&b;
        *res1= *res + v2;
        *res= 2* *res1;
        printf("a=%d,b=%d\n",*res,*res1);








}

void ma_fonction1(int v1, int v2) {
    int a;
    int b;
    int *res;
    res=&a;
    *res=v1;
    res=&b;
    *res=a +v2;
    res=&a;
    *res=2 * b;
    printf("a=%d, b=%d\n",a,b);
    printf("%p",&res);
}

int main() {
        ma_fonction(10,20);
        ma_fonction1(10,20);
        return 0;
}
//comment utiliser le debuggeur ddd
