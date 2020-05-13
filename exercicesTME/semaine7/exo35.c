#include <stdio.h>
#include <stdlib.h>
//question1
struct planete{
    char *nom;
    float densite;
    float distancesoleil; //en millions de km
    int satellites;
};
#include <stdio.h>
#define NB_PLANETES 8
//question2
void afficheplanete(struct planete myplanete){
    printf("nom : %s\n",myplanete.nom);
    printf("densité : %.1f\n",myplanete.densite);
    printf("distance du soleil en millions de km : %.1f\n",myplanete.distancesoleil);
    printf("nombres de satellites : %d\n",myplanete.satellites);

}
//question3
void affichetouteplanete(struct planete myplanete[],int t){
    int i;
    for(i=0;i<t;i++){
    printf("planete n°%d\n",i+1);
    printf("nom : %s\n",myplanete[i].nom);
    printf("densité : %.2f\n",myplanete[i].densite);
    printf("distance du soleil en millions de km : %f\n",myplanete[i].distancesoleil);
    printf("nombres de satellites : %d\n",myplanete[i].satellites);
    }
}
void modifdensite(struct planete myplanete,float *nd){
    printf("%.2f g \n",myplanete.densite);
    printf("Veuillez rentrer la nouvelle valeur de la planete passé en paramètre\n");


    nd=&myplanete.densite;
    scanf("%f",nd);
    printf("%.2f v \n",myplanete.densite);



    printf("%.2f u\n",myplanete.densite);
}
int main(){
    struct planete systemeSolaire[NB_PLANETES] ={{"Mercure", 5.42, 58, 0},
    {"Venus", 5.25, 108.2, 0},{"Terre", 5.52,149.6,1},
    {"Mars",3.94,227.9,2},{"Jupiter",1.314,778.3,16},
    {"Saturne",0.69,1427,17},{"Uranus",1.19,2869,15},
    {"Neptune",1.6,4496,2}};
    float v;

//     afficheplanete(systemeSolaire[3]);
//   affichetouteplanete(systemeSolaire,8);
    modifdensite(systemeSolaire[0],&v);



    return 0;
}