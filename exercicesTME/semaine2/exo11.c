//question1
#include <stdio.h>
int jours(float pcs,float pop,float pourcentage){
    float prcres;
     float res;
    int day;
    while(prcres<pourcentage){
        day=day+1;
        res=res+pcs;
        prcres=(res/pop)*100;

    }
    return day;
}
//question2

float pourcentage(float pcs,float pop,int jours){
        float res;
        int i;
        for(i=0;i<jours;i++){
            res=res+(pcs/pop)*100;
                if(res>100.0){
                    return -1;
                }

        }
        return res;


}



int main(){
    printf("%.1f\n",pourcentage(10,100,9));
    jours(10,100,60.0);

}