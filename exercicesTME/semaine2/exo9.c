#include <stdio.h>
#include <stdlib.h>
#include <cini.h>
//question2
void diagonale(int x){
	CINI_open_window(400, 300, "diagonale");
	int i=0;
	int j=0;
	while((i!=x)&&(j!=x)){
		CINI_draw_pixel(i,j,"red");
		i+=1;
		j+=1;	
	}
	CINI_loop();
}
	
//question1
 //question3
int main() {
 
  CINI_open_window(400, 300, "test");
  
  diagonale(100);
  CINI_draw_pixel(199, 200, "white");   /* affiche pt coord x=199, y=200*/
  CINI_draw_pixel(200, 200, "white");   /* affiche pt coord x=200, y=200*/
  CINI_draw_pixel(201, 200, "white");   /* affiche pt coord x=201, y=200*/

  CINI_loop();
  return 0;
}
//https://github.com/gabriel99870/LU1IN002/blob/master/exercicesTME/semaine1/exo8.c


