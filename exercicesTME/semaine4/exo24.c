#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
//question1
//nbe1=0
//taille=0
//nbe1<taille
int indiceInsert(int tab[],int nbe1,int taille,int e1){
  int i;
  int prec;
  int suivant;
  for(i=0;i<taille;i++){
    prec=tab[i];
    suivant=tab[i+1];
    if((e1>prec)&&(e1<suivant)){
        printf("hello world\n");
        return i+1;
    }

    if(e1==tab[i]){
        return -1;
    }
    if (nbe1==taille){
        return -1;
    }

  }
  printf("hello world1\n");

  return (taille);

}
//question2
void  insertElt(int tab[],int nbe1,int taille,int e1){
      int res=indiceInsert(tab,nbe1,taille,e1);
      printf("%d\n",res);
      int i;
      int ls;
      if(res!=-1){
        taille+=1;
        for(i=taille;i>res;i--){
          tab[i]=tab[i-1];

        }

        tab[res]=e1;
        for(i=0;i<taille;i++){

          printf("%d\n",tab[i]);

        }
    }

}
//question3

int main(){
  int tab[]={-2,-1,0,1,2,3,4,6,7,8};
  int nbe1=6;
  int e=5;
  int taille=10;
  insertElt(tab,nbe1,taille,e);
  return 0;
}
