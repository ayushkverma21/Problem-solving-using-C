#include <stdio.h>
#include <stdlib.h>
void main()
{
    char s[3][10];
    int i,j;
    printf("enter a letter");
    for (i=0;i<=2;i++){
            for(j=0;j<=9;j++){
                scanf("%c",s[i][j]);
            }
    }
for (i=0;i<=2;i++){
            for(j=0;j<=9;j++){
printf("%c \n",s[i][j]);

}
}
}
