#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int iterative(char *c1,char *c2){
    int len1=strlen(c1);
    int len2=strlen(c2);
    int i;
    if(len1==len2){
      for(i=0;c1[i]!='\0';i++){
          if(c1[i]!=c2[i]){
          return -1;
        }

      }
      return 0;
    }
    else{
      return -1;
    }
}
int recursive(char *c1, char *c2,int i){

    int taille1=strlen(c1);
    int taille2=strlen(c2);
    if(taille1!=taille2){
      return -1;
    }else{
      while(c1[i]!='\0'){
      if(c1[i]==c2[i]){

        i=i+1;
        return recursive(c1,c2,i);
      }
      else{
        return -1;

    }
  }

  }
}



int main(){
  char *c1="hello world";
  char *c2="hello world";
  int i;
  printf("%d",recursive(c1,c2,i));
  return 0;


}
