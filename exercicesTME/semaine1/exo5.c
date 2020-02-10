#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

//question1

int discriminant(int a,int b,int c){

    return (b*b)-(4*a*c);

}
int afficheRacines(int a,int b,int c){
    float r1;
    float r2;
    float r;
    int delta=discriminant(a,b,c);
    if(delta>0){
         r1=((-b)-sqrt(a))/2*(a);
         r2=((-b)+sqrt(a))/2*(a);
        return printf("%f,%f",r1,r2);
    }
    else if(delta==0){
        r = (-b)/2*(a);
        return r;
    }
    else{
        return printf("pas defini");
        }



}
int main(){
    assert(discriminant(2,-1,-3)==25);
    assert(discriminant(-1,5,-2)==17);
    assert(discriminant(5,0,-5)==100);

    printf("%d\n",discriminant(3,-5,2));
    printf("%d",afficheRacines(3,-5,2));
    return 0;
}
//question2