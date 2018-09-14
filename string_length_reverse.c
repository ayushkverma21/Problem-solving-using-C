#include <stdio.h>
#include <stdlib.h>
void string_length(char *);
void string_reverse(char *);

int i,l =0;
char s[10];
void main()
{

    gets(s);
    puts(s);
    string_length(&s);
    string_reverse(&s);
    }
    void string_length(char *p){

    for(i=0;*(p+i)!='\0';i++){
        l = i+1;

    }
printf("length of string is %d",l);
    }
    void string_reverse(char *p){

        int t;

      for(i=0;i<=l/2;i++){
      t= *(p+i);
      *(p+i) = *(p+l-i);
      *(p+l-i) = t;
      }
      puts(s);


    }
