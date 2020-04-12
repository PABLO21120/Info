#include <stdio.h>
#include <stdlib.h>

void echange(int *t1,int *t2,int len){
    int temp;
    int i;
        printf("t1=\n");
    printf("{");
    for(i=0;i<len;i++){
    printf("%d\t",t1[i]);
    }
    printf("}\n");
    printf("t2=\n{");
    for(i=0;i<len;i++){
    printf("%d\t",t2[i]);
    }
    printf("}\n");
    for(i=0;i<len;i++){
        if(t1[i]<t2[i]){
        temp=t2[i];
        t2[i]=t1[i];
        t1[i]=temp;
        }

    }
    printf("t1=\n");
    printf("{");
    for(i=0;i<len;i++){
    printf("%d\t",t1[i]);
    }
    printf("}\n");
    printf("t2=\n{");
    for(i=0;i<len;i++){
    printf("%d\t",t2[i]);
    }
    printf("}\n");
    printf("%p\n",&t1[6]);
}
int main(){
    int t1[]={7,3,9,4,5,7};
    int t2[]={6,4,8,3,6,5};
    int t3[] = { 7, 3, 9, 4, 5, 7, 6, 4, 8, 3, 6, 5 };
    echange(t3,0x7ffee4245988,6);

}