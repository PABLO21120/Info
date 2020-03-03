#include <stdio.h>
int recursive(int tab[],int search,int taille,int min,int max,int middle){
  int find=0;
  printf("\n");

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
  int taille=18;
  int min=0;
  int max=taille;
  int middle;
  printf("%d\n",recursive(tab,search,taille,min,max,middle));

}
