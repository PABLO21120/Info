#include <stdio.h>
//question1
int est_deb(char *c1,char *c2,int i,int j){

    while(c1[j]!='\0'){
        if(c1[j]!=c2[i]){
        return 0;
        }else{
        return est_deb(c1,c2,i+1,j+1);
        }
    }
    return 1;

}

//question2
int est_incluse(char *c1,char *c2,int i,int j){
    j=0;
    while(c1[i]!='\0'){
        while((c1[0]!=c2[i])&&(c1[1]!=c2[i+1])){
        i++;
        printf("%d\n",i);
        }
        printf("%c\n",c1[0]);
        printf("%c\n",c2[i]);
        return est_deb(c1,c2,i,j);

    }
    return 1;
}
int n_est_pas_deb(char *c1,char *c2,int i,int j){

    while(c1[j]!='\0'){
        if((c1[j]!=c2[i])||(c2[i]=='\0')){
        return 0;
        }else{
        return n_est_pas_deb(c1,c2,i+1,j+1);
        }
    }
    return 1;

}
int est_inclusebis(char *c1,char *c2,int i,int j){
        j=0;

        while (c1[0]!=c2[i]){
        if(c2[i]=='\0'){
            return 0;
        }
        i++;
        printf("%d\n",i);

        }
        printf("%c \n",c1[0]);
        printf("%c\n",c2[i]);
        if(c1[j]==c2[i]){
        return n_est_pas_deb(c1,c2,i,j);
        }


    return 1;
}

int main(){
    char *c1="phab";
    char *c2="alphabet";
    int i;
    int j;
    printf("%d\n",est_deb(c1,c2,i,j));
    printf("%d\n",est_inclusebis(c1,c2,i,j));
}