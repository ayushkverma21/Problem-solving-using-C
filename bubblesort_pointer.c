#include <stdio.h>
#include <stdlib.h>
void sort(int *);
int binary_search(int *,int);
void main()
{
   int a[5],*p,g,i,key;
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
 printf("please enter number to find");
 scanf("%d",&key);
 g = binary_search(&a[0],key);
printf("%d",g);
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
int binary_search(int *q ,int keyy){

int l = 1, h = 5;
while(l<=h){
int mid = (l+h)/2;
if(keyy == *(q+mid-1)){
    return mid;
}
if(keyy<*(q+mid-1)){
    h = mid-1;
}
else{
 l = mid+1;
}
}
}

