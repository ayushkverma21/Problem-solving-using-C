#include<stdio.h>
#include<conio.h>
void main(){
char s[10] = "saurabh";
int i;
clrscr();
for(i=0;s[i]!='\0';i++){
printf("%c",s[i]);
}
printf("\n%s",s);
puts(s);
getch();
}