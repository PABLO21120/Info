#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//question1
int signeProduit(int a,int b){
    if(a==b){
    return 0;
    }else if(a>b){
        return 1;
    }
    else{
        return -1;
    }

}
//question2
int main(){
    assert(signeProduit(2,1)==1);
    assert(signeProduit(1,2)==-1);
    assert(signeProduit(1,1)==0);
    return 0;
}