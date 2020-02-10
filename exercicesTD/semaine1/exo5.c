#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// question1

int plusGrand(int a,int b, int c)
{
    int max=0;
    if((a>b)&& (a>c))
    {
        max=a;
    }
    else if((b>a)&&(b>c))
    {
        max=b;
    }
    else if ((c>a)&& (c>b))
    {
    max=c;
    }
    return max;



}
// question2
int main(){
    printf("%d",plusGrand(2,4,1));
    assert(plusGrand(2,4,1)==4);
    assert(plusGrand(2,6,1)==6);
    assert(plusGrand(2,4,7)==7);

    return 0;
}
// question3
//Question 3
//Donnez une instruction, faisant appel `a la fonction plusGrand, permettant d’afficher l’entier le plus grand parmi
//cinq.