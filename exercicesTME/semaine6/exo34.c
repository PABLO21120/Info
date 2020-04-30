//jeudumorpion
//question1
#include <stdio.h>

int N;
void init(char plateau[N][N]){
    int i;
    int j;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            plateau[i][j]='-';
        }

    }
}
void afficher();
int main(){
    int N=10;
    char plateau[N][N];
    init(plateau);

}