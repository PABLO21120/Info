#include <stdio.h>
int test(char *c1){
  int i=0;
  int car=0;
  int word=0;
  int space=0;
  while(c1[i]!='\0'){
    if((car==0)&&(c1[i]!=' ')){
      word+=1;
      car+=1;
      space=0;


    }else if((c1[i]==' ')&&(space==0)){
      car=0;
      space+=1;

    }
    i++;
  }
  return word;

}

int main(){
  char *c1="           hello world les  cousins     ";
  printf("%d",test(c1));
  return 0;
}
