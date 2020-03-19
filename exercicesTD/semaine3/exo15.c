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
void permute_circulaire1(int *a, int *b,int *c){
  printf("avant changement : \n");
  printf("a=%d, b=%d, c=%d\n",*a,*b,*c);
  int tempb;
  int tempc;
  tempb=*b;
  tempa=*a;
  permute(a,b);
  *b=temp;
  permute(b,c);
  printf("Apres changement : \n");

  printf("a=%d, b=%d, c=%d\n",*a,*b,*c);
}

int main(){
    int a=10;
    int b=20;
    int c=30;
//    printf("avant appel : a=%d et b=%d\n",a,b);
//    permute(&a,&b);
//    printf("apres appel a=%d et b=%d\n",a,b);

    permute_circulaire1(&a,&b,&c);
    return 0;
}
