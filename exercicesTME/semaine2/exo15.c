//question1
#include <cini.h>
void triangles(int h,int l){
	int xA=0;
	int yA=h-1;
	int xB=h-1;
	int yB=l-1;
	int xC=(l/2)-1;
	int yC=0;
	int i;
	int epsilon;
	CINI_open_window(300,300,"gle");
		CINI_fill_window("white");
	while(epsilon>0){
	

/*A-->B*/	CINI_draw_line(xA,yA,xB,yB, "red");
/*C-->B*/	CINI_draw_line(xC,yC,xB,yB, "green");
/*A-->C*/	CINI_draw_line(xA,yA,xC,yC, "blue");

		xA=((xB+9*xA)/10);
		yA=((yB+9*yA)/10);
		xC=((xA+9*xC)/10);
		yC=((yA+9*yC)/10);
		yB=((yC+9*yB)/10);
		xB=((xC+9*xB)/10);
		printf("hello\n");
		CINI_loop_until_keyup();
		epsilon=(xB-xA)*(xB-xA);
	}
	
}
//question2
void angles(int h,int l){
	int xA=((h-1))/10;
	int yA=(((h-1)*9)+l-1)/10;
	int xB=(((l/2)-1+9*(h-1))/10);
	int yB=9*(l-1)/10;
	int xC=9*((l/2)-1)/10;
	int yC=((h-1)/10);
	
	CINI_fill_window("white");
/*A*/	CINI_draw_line(0,h-1,h-1,l-1, "red");
/*B*/	CINI_draw_line((l/2)-1,0,h-1,l-1, "green");
/*C*/	CINI_draw_line(0,h-1,(l/2)-1,0, "blue");
	

/*A'-->B'*/	CINI_draw_line(xA,yA,xB,yB,"red");
/*A'-->C'*/	CINI_draw_line(xA,yA,xC,yC,"blue");
/*B'-->C'*/	CINI_draw_line(xB,yB,xC,yC, "green");
	
}
//question3


int main(){

	CINI_open_window(300,300,"gle");
	triangles(200,200);
	CINI_loop();
	return 0;
}
