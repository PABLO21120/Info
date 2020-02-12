

//question1
#include <stdio.h>
#include <math.h>

  /* Vous devrez bien s�r modifier les  parametres et valeur de retour des fonctions nb_racines, nb_racines_delta et racines */
  /* Les declarations actuelles permettent de compiler et d'executer le programme */

  /* Dans la fonction affiche_racines, vous devrez compl�ter l'appel � la fonction racines */

int nb_racines(int a,int b, int c) {

    int *pdelta;
    int delta;
    pdelta=&delta;

    if(a!=0){
        *pdelta=(b*b)-4*a*c;
        if(*pdelta>0){
            return 2;
        }
        else if(*pdelta==0){
            return 1;

        }
        else{
            return 0;
        }

    }
    return 0;


}
void nb_racines_delta(int a,int b,int c,double *discriminant,double *discriminant2, int *delta,int *nbdiscri){

        *delta=(b*b)-(4*a*c);
        if(*delta>0){
            *nbdiscri=2;
            *discriminant=(((-b)-sqrt(*delta))/2*a);
            *discriminant2=((-b)+sqrt(*delta))/2*a;
            printf("Le delta vaut %d . Il y a %d discriminant qui sont %.1lf et %.1lf \n",*delta,*nbdiscri,*discriminant,*discriminant2);
        }
        else if(delta==0){
            *nbdiscri=1;
            *discriminant=(-b)/2*a;
            printf("Le delta vaut %d . Il y a %d discriminant qui est %.1f \n",*delta,*nbdiscri,*discriminant);

        }else{
            printf("le delta est negatif, il vaut %d \n",*delta);
        }




}

int racines (int a,int b,int c) {

  return 0;
}

int main(){
    double delta;
    int a;
    printf("veuillez rentrez une valeur de a ? \n");
    scanf("%d",&a);
    int b;
    printf("veuillez rentrez une valeur de b ? \n");
    scanf("%d",&b);


    int c;
    printf("veuillez rentrez une valeur de c ? \n");
    scanf("%d",&c);


    double discriminant;
    double discriminant2;
    int delta1;
    int nbdiscri;
//    printf("%d",nb_racines(a,b,c));
    nb_racines_delta(a,b,c,&discriminant,&discriminant2,&delta1,&nbdiscri);


return 0;
}
