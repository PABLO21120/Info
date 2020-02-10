//question1
#include <stdio.h>
#include <assert.h>


void affichage(float *tab,int taille){
    int i;
    for(i=0;i<taille;i++){
            printf("%.1f\n",tab[i]);
    }
}

//question2
void affichage1(float *tab,int taille,int p){
    int i;
    for(i=0;i<taille;i++){
            if((i+1)%p==0){
            printf("%.1f\n",tab[i]);
            }
            else{
            printf("%.1f\t",tab[i]);
            }


    }
}


//question3

void echange(float *tab,int taille,int i,int j){
            int tempI;

            tempI=tab[i];
            tab[i]=tab[j];
            tab[j]=tempI;

}
int main(){
        float tab[4]={3.0,4.0,5.0,2.0};
        affichage1(tab,4,2);
//        affichage1(tab,4,2);
        echange(tab,4,2,0);
        affichage1(tab,4,2);
        return 0;
}