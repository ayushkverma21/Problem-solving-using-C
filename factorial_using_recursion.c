#include <stdio.h>
#include <stdlib.h>
int mul(int);
void main(){
int a,b;
printf("enter no");
scanf("%d",&a);
b= mul(a);
printf("factorial = %d",b);
}
int mul(int c){
int m;
if (c==1){

    return c;
}
else{
    m = c*mul(c-1);
    return(m);
}

}
