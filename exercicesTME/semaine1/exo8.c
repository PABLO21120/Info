#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define TADULTE 22.7
#define T5ET15 10.75
#define TMOINS5 0
#define TFAMILLE 57.80

//question1
float somme;
float prixEntrée(int adulte,int enfant){
        printf("%d\n",adulte);
        printf("%d\n",enfant);
    if((adulte <= 2)&&(enfant <= 3)){
        somme=TFAMILLE;
        return somme;
    }
    else{
        somme=adulte*TADULTE+enfant*T5ET15;
        return somme;
    }


}
int main(){
    printf("%.2f\n",prixEntrée(2,3));
    printf("%.2f\n",prixEntrée(2,3));
    printf("%.2f\n",prixEntrée(4,3));
    printf("%.2f\n",prixEntrée(7,3));
    printf("helloworld\n");
}