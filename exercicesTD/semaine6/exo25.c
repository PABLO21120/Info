#include <stdio.h>
#include <stdlib.h>
int iterative(int tab[],int search,int taille){
  int middle;
  int indice_min=0;
  int indice_max=taille;
  int find=0;
  while((indice_min<indice_max)&&(find==0)){
    middle=(indice_min+indice_max)/2;
    if(tab[middle]==search){
      find=1;
      printf("positif\n");
      return 0;
    }else{
      if(search>tab[middle]){
        indice_min=middle+1;


      }else{
        indice_max=middle-1;

      }
    }
  }
  if (find==1){
    printf("positif\n");

  }
  else{
    printf("le nombre n'appartient pas à la liste !\n");
    return -1;
  }



}
int recursive(int tab[],int search,int taille,int min,int max,int middle){
  int find=0;

  while((min<max)||(find=0)){
    middle=((min+max)/2);
    if(tab[middle]==search){
      printf("%d=%d\n",tab[middle],search);
      find=1;
      printf("positif\n");
      return 0;
    }else{
      if (tab[middle]>search){
        printf("%d>%d\n",tab[middle],search);

        max=middle-1;
        return recursive(tab,search,taille,min,max,middle);
      }
      else{
        printf("%d<%d\n",tab[middle],search);

        min=middle+1;
        return recursive(tab,search,taille,min,max,middle);

      }
    }

  }
  printf("le nombre n'appartient pas à la liste !\n");

  return -1;
}
int main(){
  int tab[]={0,1,3,4,5,6,7,22,23,24,26,27,30,31,32,33,34};
  int search=29;
  int taille=17;
  int min=0;
  int max=taille;
  int middle;

  iterative(tab,search,taille);


  printf("%d\n",recursive(tab,search,taille,min,max,middle));

}
