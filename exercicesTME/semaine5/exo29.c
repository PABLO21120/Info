#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//question1
void affiche(char *c1){
  int i;
  for(i=0;c1[i]!='\0';i++){
    printf("%c\n",c1[i]);
  }

}
//question2
char modif(char *c1){
  char *c2;
  c2=malloc(strlen(c1));
  printf("veuillez rentrez une chaine de caractères : \n");
  scanf("%s",c2);
  int i;
  int j;
  int x=0;
  char *res;
  res=malloc(strlen(c1));
  for(i=0;c1[i]!='\0';i++){
    for(j=0;c2[j]!='\0';j++){
      if(c1[i]==c2[j]){
        res[x]=c2[i];
        x++;
      }

    }
  }
  printf("%c",*res);
  return *res;



}
int main(){
  char *c1="hello worldg";
  printf("%c",modif(c1));
}
