#include <stdio.h>
#include <stdlib.h>
//question1
int iterative(int *tab,int P,int N){
  int i;
  for(i=0;i<N;i++){
    if(tab[i]==P){
      return 1;
    }
  }
  return 0;
}
//question2
//il existe deux cas d'arrets : si la valeur est commune alors ca retourne 1, si a la fin du parcours cela ne trouve pas ca retourne 0;
//question3
int recursive(int*tab,int P,int N,int i){
  while(i!=N){
    if(tab[i]==P){
      return 1;
    }else{
      return recursive(tab,P,N,i+1);
    }

  }
  return 0;



  }




int main(){
  int tab[10];
  tab[0]=0;
  tab[1]=20;
  tab[2]=30;
  tab[3]=12;
  tab[4]=15;
  tab[5]=13;
  tab[6]=26;
  tab[7]=43;
  tab[8]=-4;
  tab[9]=30;
  int P=-4;
  int N=10;
  int i=0;
  printf("%d\n",iterative(tab,P,N));
  printf("%d\n",recursive(tab,P,N,i));
}
