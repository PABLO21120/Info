#include <stdio.h>
//question1
int est_deb(char *c1,char *c2,int i){
    while(c1[i]!='\0'){
        if(c1[i]!=c2[i]){
        return 0;
        }else{
        return est_deb(c1,c2,i+1);
        }
    }
    return 1;

}
//question2
int est_incluse(char *c1,char *c2,int i){
    while(c1[i]!='\0'){
        while((c1[0]!=c2[i])&&(c1[1]!=c2[i+1])){
        i++;
        printf("%d\n",i);
        }
        return est_deb(c1,c2,i);

    }
    return 1;
}
int main(){
    char *c1="bet";
    char *c2="alphabet";
    int i;
    printf("%d\n",est_deb(c1,c2,i));
    printf("%d\n",est_incluse(c1,c2,i));
}