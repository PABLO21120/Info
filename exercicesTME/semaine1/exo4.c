//question1
#include <stdio.h>
#include <assert.h>
int alternative(int n1, int n2, int n3) {
    int res ;
    if (n1 > 8) {
        res = 3;
    } else {
        if (n3 == 20) {
            res = 2;
        } else {
        if ((n2 >= 10) && (n3 >= 10)) {
            res = 1;
        } else {
            res = 0;
        }
    }
}
return res;
}
// question2

int main(){
    assert(alternative(2,4,5)==0);
    assert(alternative(9,4,5)==3);
    assert(alternative(2,10,10)==1);
    assert(alternative(2,4,20)==2);
return 0;
}
