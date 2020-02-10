//question1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
int signeSomme(int a,int b)
{
    int s=0;
    if(a==b)
    {
        s=0;
    }
    else if(a>b)
    {
        s=1;
    }
    else
    {
        s=-1;
    }
    return s;
}
//question2
int main(){
    assert(signeSomme(2,3)==-1);
    assert(signeSomme(4,2)==1);
    assert(signeSomme(3,3)==0);
    printf("hello world \n");

}