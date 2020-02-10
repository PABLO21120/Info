#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
// question1

int min_max(int *pmin,int *pmax,int c){

        if (c<*pmin){
            *pmin=c;
        }
        if(c>*pmax){
            *pmax=c;
        }
        printf("%d,%d,%d",*pmax,*pmin,c);
        return 0;
}
//question2

int stats(int a,int b,int c,int d,int *min,int *max,int *moy){
        if((a>0)&&(b>0)&&(c>0)&&(d>0)){


        int temp[4]={a,b,c,d};
        int res[4];
    int i;
    int pos;
   for(i=0;i<sizeof(temp);i++){
        if(temp[i]>0){
                min_max(min,max,temp[i]);
                pos=pos+1;
                res[i]=temp[i];

        }

   }
   *moy=((a+b+c+d))/pos;
   printf("v1=%d, v2=%d, v3=%d, v4=%d, maximum = %d, minimum = %d, moyenne = %d",a,b,c,d,*min,*max,*moy);
   return 0;
}
int main(){
    int a=2;
    int b=10;
    int *min;
    *min=1;
    int *max;
    int *moy =0;
    *max=100;
    min_max(&a,&b,100);
    stats(4,3,2,3,min,max,moy);
    return 0;
}