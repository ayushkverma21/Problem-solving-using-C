#include <stdio.h>
#include <stdlib.h>
void sort(int *);
void main()
{
   int a[5],*p,i;
   p=&a[0];
   for(i=0;i<=4;i++){
    scanf("%d",(p+i));
    }
 for(i=0;i<=4;i++){
 printf("%d",*(p+i));
    }
    sort(&a[0]);
    printf("value after sorting");
    for(i=0;i<=4;i++){
 printf("%d",a[i]);}
   }
   void sort(int *q){
       int round,j;
 for(round=0;round<=4;round++){
    for(j=0;j<=3;j++){
        if(*(q+j)>*(q+j+1)){
            int t;
            t = *(q+j);
            *(q+j) = *(q+j+1);
            *(q+j+1) = t;

        }
    }

 }

    }



