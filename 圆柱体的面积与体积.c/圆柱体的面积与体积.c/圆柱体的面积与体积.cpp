/**
*����02_3��Բ���ı���������
*�ϷƷ�
*680
*8��
*2017 03.19
*/
#include<stdio.h>

   int main(void)
{
   float r;
   float h;
   float S;
   float V;
   printf("Բ�����Բ�뾶Ϊ:");
   scanf("%f",&r);
   printf("Բ����ĸ߶�Ϊ:");
   scanf("%f",&h);
   S=6.28*r*r+6.28*r*r*h;
   V=3.14*r*r*h;
   printf("Բ����ı����Ϊ:%.2f\n",S);
   printf("Բ��������Ϊ:%.2f\n",V);
   return 0;
}