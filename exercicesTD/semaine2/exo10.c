#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// question2

float valeur_absolue(float abs){

        if(abs<0){
            return (-abs);
        }
        else{
            return abs;
        }

}
//question3

int egal_eps(float a,float b, float eps){

        if(valeur_absolue(a-b)<=eps){
            return 1;
        }
        else{
            return 0;
        }
}
float surface_float(float l,float L)
{
    return (l*L);
}

//question4
int main(){
        assert(valeur_absolue(-10)==10);
        assert(valeur_absolue(100)==100);
        assert(egal_eps(3.7,4.2,0.6)==1);
        assert(egal_eps(3.7,4.2,0.1)==0);
        assert(surface_float(3.0,4.0)==12.0);
        assert(surface_float(2.0,4.0)==8.0);
        assert(surface_float(3.0,5.0)==15.0);
        return 0;

}
