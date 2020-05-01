//jeudumorpion
//question1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int N=5;
void init(char plateau[N][N]){
    int i;
    int j;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            plateau[i][j]= '-';

        }

    }
}
void afficher(char plateau[N][N]){

    int i=0;
    int j;

       printf("\n");
    for(i=0;i<N;i++){
     for(j=0;j<N;j++){
       printf("%c|\t",plateau[i][j]);
     }


     printf("\n");
   }
}
//question2
int choisir_menu12q(){

    printf("1. partie à 2 joueurs\n");
    printf("2. partie contre l'ordinateur\n");
    printf("3. quitter\n");
    int res;
    printf("Veuillez faire un choix : \n");
    scanf("%d",&res);
    while((res>3)||(res<1)){
    printf("Veuillez faire un choix entre 1 2 et 3 parmis les trois propositions ci-dessus:\n");
    scanf("%d",&res);
    }
    return res;


}
//question3
void jouer(char plateau[N][N], int joueur){
    int x;
    int y;
     if(joueur==0){
     printf("Veuillez saisir les coordoonnées du pions X que vous souhaitez placer : \n");
    printf("ligne n° : \n");
    scanf("%d",&x);
    printf("colonne n° : \n");
    scanf("%d",&y);
    while(((x>6)||(x<1))||((y>6)||(y<1))||(plateau[x-1][y-1] != '-')){
        printf("veuillez saisir les coordonnees comprise entre 1 et 5 cette case est certainement prise\n");
        printf("ligne n° : \n");
        scanf("%d",&x);
        printf("colonne n°: \n");
        scanf("%d",&y);


    }
    plateau[x-1][y-1]='X';
    }
     if(joueur==1){
     printf("Veuillez saisir les coordoonnées du pions O que vous souhaitez placer : \n");
    printf("x : \n");
    scanf("%d",&x);
    printf("y : \n");
    scanf("%d",&y);
       while(((x>6)||(x<1))||((y>6)||(y<1))||(plateau[x-1][y-1] != '-')){
        printf("veuillez saisir les coordonnees comprise entre 1 et 5 cette case est certainement prise\n");
        printf("x : \n");
        scanf("%d",&x);
        printf("y : \n");
        scanf("%d",&y);


    }
    plateau[x-1][y-1]='O';
    }

      afficher(plateau);
}
//question4

void jouerOrdinateur(char plateau[N][N]){
    int x;
    int y;
    x=rand()%((5+1)-1)+1;
    y=rand()%((5+1)-1)+1;
    plateau[x-1][y-1]='O';

}
//question5
int partie_gagnee(char plateau[N][N]){
    char res;
    int i;
    int j;
    //lignes
    for(i=0;i<N;i++){
        if((plateau[i][0]!='-')&&(plateau[i][0]==(plateau[i][1]))&&(plateau[i][0]==plateau[i][2])&&(plateau[i][0]==plateau[i][3])&&(plateau[i][0]==plateau[i][4])){
            printf("win\n");
            return 1;
        }

   }
   //colonnes
   for(i=0;i<N;i++){
        if((plateau[0][i]!='-')&&(plateau[0][i]==plateau[1][i])&&(plateau[0][i]==plateau[2][i])&&(plateau[0][i]==plateau[3][i])&&(plateau[0][i]==plateau[4][i])){

            return 1;
        }
   }
        if (( plateau[0][0] !='-') && ( plateau[0][0] == plateau[1][1] ) && ( plateau[0][0] == plateau[2][2] ) && ( plateau[0][0] == plateau[3][3] ) && ( plateau[0][0] == plateau[4][4] )) {

        return 1;
        }
   //diagonales
        if (( plateau[0][4]!='-') && ( plateau[0][4] == plateau[1][3] ) && ( plateau[0][4] == plateau[2][2] )&& ( plateau[0][4] == plateau[3][1] )&& ( plateau[0][4] == plateau[4][4] )) {

         return 1;
         }
   return 0;


}
//question6
void jouer_a(char plateau[N][N]){
    init(plateau);
    int res;
    int qj=0;
    int gagne;
    res=choisir_menu12q();
    if(res==3){
        printf("Merci d'avoir joué\n");
        return;
    }
    if(res==1){
        afficher(plateau);

        gagne=partie_gagnee(plateau);
        while(gagne!=1){
            if(qj>=25){
                printf("La partie est terminée il n'y a pas de gagnant\n");
            }
            if(qj%2==0){
            printf("Joueur 0 joue 'X':\n");
            jouer(plateau,0);

            gagne=partie_gagnee(plateau);
            qj+=1;
            }else{
                printf("Joueur 1 joue 'O' :\n");
                jouer(plateau,1);

                gagne=partie_gagnee(plateau);
                qj+=1;
            }

            }

        }
        if(res==2){
        partie_gagnee(plateau);
        afficher(plateau);

        while(partie_gagnee(plateau)==0){
             if(qj>=25){
                printf("La partie est terminée il n'y a pas de gagnant\n");
            }
            if(qj%2==0){

            printf("Joueur 0 joue 'X':\n");
            jouer(plateau,0);

            partie_gagnee(plateau);
            qj+=1;
            }else{
                jouerOrdinateur(plateau);
                afficher(plateau);
                qj+=1;
                partie_gagnee(plateau);
            }

            }
            afficher(plateau);
        }
        if(partie_gagnee(plateau)==1){
        printf("Vous avez gagné felicitation !\n");
        choisir_menu12q();
        jouer_a(plateau);
        }



        }





int main(){
    srand(time(NULL));
    int N=5;
    char plateau[N][N];
    jouer_a(plateau);

    srand(time(NULL));

}
//int partie_gagnee(char plateau[N][N]){
//void jouerOrdinateur(char plateau[N][N]){
//void jouer(char plateau[N][N], int joueur){
//}
//void afficher(char plateau[N][N]){
//
//    printf("1. partie à 2 joueurs\n");
//    printf("2. partie contre l'ordinateur\n");
//    printf("3. quitter\n");
//}


