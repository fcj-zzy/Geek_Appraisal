#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n=10000;//y n
 int i;
 double x=0; 
 double a;
 scanf("%lf",&a);
 double h;
 scanf("%lf",&h);
 double y[100001]={a};//取第一个为a，其余为0 
 for(i=1;1;i++){
  y[i]=y[i-1]-h*y[i-1];//y n+1=yn+h*(-yn)
   x+=0.001;
   if(y[i-1]-y[i]<0.001*h)
   break;
 printf("x=%f y(%d)=%.10f\n",x,i,y[i]);//输出范围内所有y 
}	
	return 0;
}

