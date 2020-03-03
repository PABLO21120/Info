#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void init_temp(int n,float tab[]){
      int i;
      for(i=0;i<n;i++){
        tab[i]=(rand()%(300-(-200))+(-200))/10;
        printf("%f\n",tab[i]);


    }

  }
void affichage(int n,float tab[]){
  int i;
  for(i=0;i<n;i++){
    printf("%f\n",tab[i]);
  }
}
//question2
void moy_temp(int n,float tab[],float *moy){
    int i;
    int res;
    for(i=0;i<n;i++){
      res+=tab[i];

    }
    *moy=(res/n);
}
//question3
void neg_temp(int *neg,float *moy_neg,int n,float tab[]){
  int i;
  float res;
  for(i=0;i<n;i++){
    if(tab[i]<0){
      *neg+=1;
      res+=tab[i];
    }
    *moy_neg=res/ *neg;
  }
}

  int main(){
    int Ni=32;
    float *tab;
    float moy;
    float moy_neg;
    int neg;
    init_temp(Ni,tab);
    affichage(Ni,tab);
    moy_temp(Ni,tab,&moy);
    printf("la température moyenne ce mois-ci etait de : %f°C\n",moy);
    neg_temp(&neg,&moy_neg,Ni,tab);
    printf("Parmis les %d jours ou la température etait negative la température moyenne est de %.1f°C\n",neg,moy_neg);

    srand(time(NULL));
    return 0;


  }
