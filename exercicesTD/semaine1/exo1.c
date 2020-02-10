#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int surface(int l,int L)
{
    return (l*L);
}
int main(){
    assert(surface(2,3)==6);
    assert(surface(3,2)==6);
    printf("succesfull");
    return 0;
}
