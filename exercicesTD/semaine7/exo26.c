#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//question1
//il n'existe pas de tableau a triple entrées c'est pq il faut utiliser les structures

//question2
//question3
//question4
//question5

  struct point{
    int x;
    int y;
    char *color;

  };
  struct rectangle{
    char *background_color;
    char *color;
    struct point point_BG;
    struct point point_HD;
  };
  struct rectangle intersection_rectangles(struct rectangle rec1,struct rectangle rec2){
    
  }
  int main(){
    struct point mon_point;
    struct rectangle mon_rectangle;
    mon_rectangle.background_color="blanc";
    mon_rectangle.color="rouge";
    mon_rectangle.point_BG.x=100;
    mon_rectangle.point_BG.y=200;
    mon_rectangle.point_HD.x=300;
    mon_rectangle.point_HD.y=2;



    mon_point.x=3;
    mon_point.y=4;
    mon_point.color=malloc(10);
    mon_point.color="rouge";
    printf("%d,%d,%s\n",mon_point.x,mon_point.y,mon_point.color);
    printf("point bas_gauche :(%d,%d)\n point haut_droite :(%d,%d)\n couleur de fond : %s \n couleur : %s\n",mon_rectangle.point_BG.x,mon_rectangle.point_BG.y,mon_rectangle.point_HD.x,mon_rectangle.point_HD.y,mon_rectangle.background_color,mon_rectangle.color);
    return 0;
  }
