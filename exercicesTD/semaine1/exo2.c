//Exercice2 : fonction d'affichage
// question1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

double multi(int a,float b)
{
    return(a*b);

}
int main(){
    int op1;
    float op2;

    op1=3;
    op2=2.7;
    printf("%d * %.2f = %.2lf\n",op1,op2,multi(op1,op2)); //%.(nbres de chiffres après la virgule)f ou d ...)
    multi(2,2.0);
    printf("succesfull");
    return 0;
}
// question2
