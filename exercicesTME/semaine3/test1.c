#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CHANCE 3
#define POINTSGAGNANTS 3

int choix_joueur(){
    int saisie;
    int chance=CHANCE;
    int i=chance;
    while(i>0){
        printf("veuillez saisir un nombre entre 1 et 3\n");
        scanf("%d",&saisie);
        printf("%d\n",saisie);
        if((saisie!=1)&&(saisie!=2)&&(saisie!=3)){
            i=i-1;
            printf("vous avez choisis un chiffre different,il vous reste %d chances\n",i);

        }else{
            return saisie;

        }
    }
    return -1;



}
int choix_ordinateur() {

    int res= rand()%(4-1)+1;
    return res;
}
void score(int choixo,int choixj,int *scorej,int *scoreo){
    choixo=choix_ordinateur();
    choixj=choix_joueur();
    printf("l'ordinateur a dit %d\n",choixo);
    printf("le joueur a dit %d\n",choixj);

    if (choixo>choixj){
        *scoreo+=1;
    }else if(choixo<choixj){
        *scorej+=1;

    }
    printf("Le score est de %d/%d pour joueur - %d/%d pour ordinateur \n",*scorej,POINTSGAGNANTS,*scoreo,POINTSGAGNANTS);


}
void jeu(){
    int i=0;
    int choix;
    int choixordi;
    int score1=0;
    int score2=0;
    while((score1!=POINTSGAGNANTS)||(score2!=POINTSGAGNANTS)){
        score(choix,choixordi,&score1,&score2);
        if(score1 == POINTSGAGNANTS){
    printf("le gagnant est joueur\n");
    break;
        }
        else if(score2 == POINTSGAGNANTS){
        printf("le gagnant est ordinateur \n");
        break;

   }
    }



}


int main(){
    srand(time(NULL));
    int scoj=0;
    int scoo=0;
    int choix1;
    int choix2;
    int i;
    jeu();
}
