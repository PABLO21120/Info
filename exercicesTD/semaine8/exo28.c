#include <stdio.h>
typedef struct _cellule_t cellule_t{
  int donnee;
  cellule_t *suivant;
};
//question1
cellule_t *Creer_cellule(int d){
    cellule_t *cell=malloc(sizeof(*cellule_t));
    cell->donnee=d;
    cell->suivant=NULL;
    return cell;

}
int main(){


}
