#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
int n=10000;
 int i;
 double x=0; 
 double a=2.0;
 //scanf("%lf",&a);
 double h=0.001;
 //scanf("%lf",&h);
 double y[10000]={a}; 
 for(i=1;1;i++){
  y[i]=y[i-1]-h*y[i-1];
   x+=0.001;
   if(y[i-1]-y[i]<0.001*h)
   break;
 printf("x=%f y(%d)=%.10f\n",x,i,y[i]); 
 }
	return 0;
}

