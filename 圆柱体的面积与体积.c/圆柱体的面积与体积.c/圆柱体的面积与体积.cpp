/**
*任务02_3求圆柱的表面积及体积
*孟菲菲
*680
*8班
*2017 03.19
*/
#include<stdio.h>

   int main(void)
{
   float r;
   float h;
   float S;
   float V;
   printf("圆柱体底圆半径为:");
   scanf("%f",&r);
   printf("圆柱体的高度为:");
   scanf("%f",&h);
   S=6.28*r*r+6.28*r*r*h;
   V=3.14*r*r*h;
   printf("圆柱体的表面积为:%.2f\n",S);
   printf("圆柱体的体积为:%.2f\n",V);
   return 0;
}