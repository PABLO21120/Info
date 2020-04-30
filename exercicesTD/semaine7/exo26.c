#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//question1
//il n'existe pas de tableau a triple entrées c'est pq il faut utiliser les structures

//question2
//question3
//question4
int max(int a,int b){
    if(a>b){
    return a;
    }
    else{
    return b;
    }
}
int min(int a,int b){
    if(a<b){
    return a;
    }
    else{
    return b;
    }
}

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

//question5
    int point_dans_rectangle(struct point a,struct rectangle b){
        if(((a.x<=b.point_BG.x)&&(a.y<=b.point_BG.y))&&((a.x<=b.point_HD.x)&&(a.y<=b.point_HD.y))){
        return 1;
        }
        else{
        return 0;
        }


    }
     struct rectangle intersection_rectangles(struct rectangle rec1,struct rectangle rec2){
     struct rectangle inter_rect;
     inter_rect.background_color="Black";
     inter_rect.color="white";
     inter_rect.point_BG.x=max(rec1.point_BG.x,rec2.point_BG.x);
     inter_rect.point_BG.y=min(rec1.point_BG.y,rec2.point_BG.y);
     inter_rect.point_HD.x=min(rec1.point_HD.x,rec2.point_HD.x);
     inter_rect.point_HD.y=max(rec1.point_BG.y,rec2.point_BG.y);
     return inter_rect;
}






  int main(){
    struct point mon_point;
    struct rectangle mon_rectangle1;
    struct rectangle mon_rectangle2;
    mon_rectangle1.background_color="blanc";
    mon_rectangle1.color="rouge";
    mon_rectangle1.point_BG.x=100;
    mon_rectangle1.point_BG.y=200;
    mon_rectangle1.point_HD.x=300;
    mon_rectangle1.point_HD.y=26;
    mon_rectangle2.background_color="blanc";
    mon_rectangle2.color="rouge";
    mon_rectangle2.point_BG.x=400;
    mon_rectangle2.point_BG.y=300;
    mon_rectangle2.point_HD.x=100;
    mon_rectangle2.point_HD.y=46;
    mon_point.x=10;
    mon_point.y=25;
    mon_point.color=malloc(10);
    mon_point.color="rouge";
    printf("%d,%d,%s\n",mon_point.x,mon_point.y,mon_point.color);
    printf("point bas_gauche :(%d,%d)\n point haut_droite :(%d,%d)\n couleur de fond : %s \n couleur : %s\n",mon_rectangle1.point_BG.x,mon_rectangle1.point_BG.y,mon_rectangle1.point_HD.x,mon_rectangle1.point_HD.y,mon_rectangle1.background_color,mon_rectangle1.color);
    printf("%d\n",point_dans_rectangle(mon_point,mon_rectangle1));
    struct rectangle res;
    res=intersection_rectangles(mon_rectangle1, mon_rectangle2);
    printf("BG de l'intersection : x= %d et y =%d\n HD de l'intersection : x= %d et y =%d\n",res.point_BG.x,res.point_BG.y,res.point_HD.x,res.point_HD.y);
    return 0;
  }
