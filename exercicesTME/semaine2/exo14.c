//question1
#include <stdio.h>

#define ADULTE 22.7
#define KID 10.75
#define FAMILLE 57.80

double prixEntree(int adulte,int enfant){
        double res=0;
        int ad;
        int enf;
        if((adulte>2) && (enfant>3)){
            ad=adulte;
            enf=enfant;
            while((ad>=2) && (enf>=3)){
                res=res+FAMILLE;
                ad=ad-2;
                enf=enf-3;
            }
            if((0<ad<2)||(0<enf<3)){
                res+=ad*ADULTE+enf*KID;

            }
        }else{
            res=adulte*ADULTE+enfant*KID;
        }
        return res;
}
int main(){
    printf("%f\n",prixEntree(4,6));
    printf("%f\n",prixEntree(7,10));
    return 0;

}


