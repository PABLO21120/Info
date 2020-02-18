//question1
#include <cini.h>
#include <stdio.h>

void carre(int longueur){
	CINI_open_window(400, 300,"diagonale");
	CINI_fill_window("white");
	int i;
	for(i=0;i!=longueur;i++){
			CINI_draw_pixel(i,0,"blue");
			CINI_draw_pixel(longueur,i,"black");
			CINI_draw_pixel(0,i,"red");
			CINI_draw_pixel(i,longueur,"green");
			
	}
	CINI_loop();
}
//question3
void carre1(int longueur,int cote){
	int i;
	for(i=cote;i!=longueur;i++){
			CINI_draw_pixel(i,cote,"blue");
			CINI_draw_pixel(longueur,i,"black");
			CINI_draw_pixel(cote,i,"red");
			CINI_draw_pixel(i,longueur,"green");
			
	}
	CINI_loop();
}
//question4
void carrees_remontant(int longueur,int x){
	CINI_open_window(400, 300,"diagonale");
	CINI_fill_window("white");
	carre1(longueur,x);
	carre1(longueur,x-5);
	carre1(longueur,x-5);
	carre1(longueur,x-5);
	carre1(longueur,x-5);

}

int main(){
	carrees_remontant(100,40);
	return 0;
}
	
