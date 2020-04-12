#include <stdio.h>
#include <stdlib.h>
int points(int e1, int e2){
  int res=0;
  if(-(e1-e2)>=4){
    res+=0;
  }
  else if(-(e1-e2)==3){
    res+=15;
  }
  else if(-(e1-e2)==2){
    res+=20;
  }
  else if(-(e1-e2)==1){
    res+=30;
  }
  else if(e1==e2){
    res+=60;
  }
  else if(e1-e2==1){
    res+=90;
  }
  else if((e1-e2)>=2){
    res+=120;
  }
  return res;
}
int val_pos(int n,int *t,int len){
  int pos=0;
  int i;
  for(i=0;i<len;i++){
    if(t[i]>0){
      pos+=1;
    }
  }

  if(pos>=n){
    return 1;
  }else{
    return 0;
  }


}
int indice_min(int *t,int len){
  //l'indice de la dernière occurence
  int i;
  int temp=t[0];
  int tempI=0;
  for(i=1;i<len;i++){
    if((t[i]<=temp)){
      temp=t[i];
      tempI=i;
    }

  }
  return tempI;

}

void replace_min_if_sup(int n,int *t,int len){
  int i;

  int res=indice_min(t,len);
  if(t[res]<n){
    t[res]=n;
  }
}
int *t_best(int n,int *t,int len){
    int *tab=malloc(n*sizeof(n));
  int i;

  for(i=0;i<n;i++){
    tab[i]=t[indice_min(t,len)];
  }
  for(i=0;i<len;i++){
    int temp=t[i];
    replace_min_if_sup(temp,tab,n)
  }
    return tab;
  }



int main(){
  int tab[]={2,-1,3,4,5,7,0,-4,8,9,100};
  replace_min_if_sup(100,tab,11);
  t_best(4,tab,11);
  return 0;
}
