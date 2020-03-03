#include <stdio.h>

void placeElt(float tab[], int i){
  int j;
  int x;
  int taille=10;
  while(tab[j]<tab[i]){
    j+=1;

  }
  float ls;
  ls=tab[j];
  tab[j]=tab[i];
  tab[i]=ls;
  for(x=taille;x>i;x--){
    tab[x]=tab[x-1];
  }


  for(j=0;j<11;j++){
    printf("%.1f\n",tab[j]);
  }
  

}
int main(){
  float tab[]={-2,-3,-1,0,7,4,5,3,2};
  int nbe1=6;
  float e=5;
  int taille=10;
  placeElt(tab,e);
  return 0;
}
