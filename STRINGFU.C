#include<stdio.h>
#include<conio.h>
void main(){
char s[2];
int i;
clrscr();
printf("enter a no.");
gets(s);

printf("%d%s%s%s",strlen(s),strrev(s),strlwr("Hello"),strupr("fuhu"));
puts(s);

getch();
}