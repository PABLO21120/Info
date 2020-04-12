#include <stdio.h>
int compte(char *chaine,char cr){
  int i;
  int res;
  for(i=0;chaine[i]!='\0';i++){
    if(chaine[i]==cr){
      res+=1;
    }
  }
  return res;

}
void affichage(){
  char *chaine;
  char cr;
  printf("Entrez une chaine de caracteres: \n");
  scanf("%s",chaine);
  printf("Entrez un caractère :\n");
  printf("hi\n");
  scanf("%c",&cr);
  printf("le nombre d'occurrence du caractere %c dans la chaine %s est de %d",cr,chaine,compte(chaine,cr));
}
int main(){
  affichage();
  return 0;
}
