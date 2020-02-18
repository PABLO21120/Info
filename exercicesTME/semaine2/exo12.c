#include <stdio.h>
#include <cini.h>
int position(int a,int b,int x,int y){
	if(y==a*x+b){
		return 0;
	}
	else if(y>a*x+b){
		return 1;
		
	}
	else{
		return -1;
	}
		
}
//question2
void affiche(int a,int b,int h,int l,char *title){
	CINI_open_window(h, l, title);
	int i;
	int j;
	int res;
	
	for(i=0;i<h;i++){
	for(j=0;j<l;j++){
	res=position(a,b,i,j);
		if (res==0){
			CINI_draw_pixel(i,j,"black");
		}
		else if(res==1){
			CINI_draw_pixel(i,j,"red");
		}
		else{
			CINI_draw_pixel(i,j,"blue");
		}
	}
	}	
	CINI_loop();
	
}
int main(){
	affiche(3,4,200,300,"test");
	printf("%d\n",position(3,4,2,3));
	return 0;
}
