#include <stdio.h>
#include <stdlib.h>
void main()
{
 int a=2,b=3,*p,*q;
 p=&a;
 q=&b;
 swap(p,q);
 printf("numbers are %d %d ",a,b);
}
void swap(int*r,int*s){
int t;
t = *r;
*r = *s;
*s = t;
}
