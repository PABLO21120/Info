#include <stdio.h>
import swiftUI

//question1
 void affichage(char *chaine){
   printf("entrez une chaine \n");
   scanf("%s",chaine);
   int i;
   for(i=0;chaine[i]!='\0';i++){
     printf("%c\n",chaine[i]);
   }
 }
 //question2
 void modif(char *chaine1,char *chaine2){
   char * temp= chaine1;
   int i;
   int j;
   for(i=0;chaine1[i]!='\0';i++){
     for(j=0;chaine2[j]!='\0';j++){
       if(chaine1[i]==chaine2[j]){
         printf("%c",*temp++);
         // *temp++ = *chaine2;
       }else{
         printf("yesss\n");
       }

     }
   }


 }
 int main(){
   char *chaine1;
   char *chaine2;
   printf("veuillez entrer la première chaine :\n");
   scanf("%s",chaine1);
   printf("veuillez entrer la deuxième chaine :\n");
   scanf("%s",chaine2);
   modif(chaine1,chaine2);
   affichage(chaine1);
   return 0;
 }
