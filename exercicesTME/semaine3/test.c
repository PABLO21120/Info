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
        return 0;
}
//question2

void stats(int a,int b,int c,int d,int *min,int *max,int *moy){
    int neg;
    if((a<0)){
        *min=-1;
        *max=-1;
        *moy=-1;

    }else if(b<0){
         min_max(min,max,a);
         min_max(min,max,c);
         min_max(min,max,d);
         *moy=((a+c+d))/3;

         printf("1/ v1=%d, v2=%d, v3=%d, v4=%d, maximum = %d, minimum = %d, moyenne = %d (seules les valeurs %d,%d et %d sont prises en compte)",a,b,c,d,*min,*max,*moy,a,c,d);


    }
     else if((b<0)&&(c<0)){

         min_max(min,max,a);
         min_max(min,max,d);
         *moy=((a+d))/2;

         printf("2/v1=%d, v2=%d, v3=%d, v4=%d, maximum = %d, minimum = %d, moyenne = %d (seules les valeurs %d et %d sont prises en compte)",a,b,c,d,*min,*max,*moy,a,d);

    }
    else if((b<0)&&(c<0)&&(d<0)){
         min_max(min,max,a);
         *moy=a;

         printf("3/v1=%d, v2=%d, v3=%d, v4=%d, maximum = %d, minimum = %d, moyenne = %d (seule la valeur %d est prise en compte)",a,b,c,d,*min,*max,*moy,a);

    }
    else if((c<0)&&(d<0)){
         min_max(min,max,a);
         min_max(min,max,b);
         *moy=((a+b))/2;

         printf("4/v1=%d, v2=%d, v3=%d, v4=%d, minimum = %d, maximum = %d, moyenne = %d (seules les valeurs %d et %d sont prises en compte)",a,b,c,d,*min,*max,*moy,a,b);
    }
    else if(c<0){
         min_max(min,max,a);
         min_max(min,max,b);
         min_max(min,max,d);
         *moy=((a+b+d))/3;

         printf("5/v1=%d, v2=%d, v3=%d, v4=%d, maximum = %d, minimum = %d, moyenne = %d (seules les valeurs %d,%d et %d sont prises en compte)",a,b,c,d,*min,*max,*moy,a,b,d);
    }

    else if((b<0)&&(d<0)){
         min_max(min,max,a);
         min_max(min,max,c);
         *moy=((a+c))/2;

         printf("6/v1=%d, v2=%d, v3=%d, v4=%d, maximum = %d, minimum = %d, moyenne = %d (seules les valeurs %d et %d sont prises en compte)\n",a,b,c,d,*min,*max,*moy,a,c);


    }

}

int main(){
    int max=0;
    int min;
    int moy=0;
    stats(10,3,-4,-7,&min,&max,&moy);
    return 0;
}