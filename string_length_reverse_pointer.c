#include <stdio.h>
#include <stdlib.h>
void string_length(char *);
void string_reverse(char *);

int i,l;
char s[10];
void main()
{

    gets(s);
    puts(s);
    string_length(&s[0]);
    string_reverse(&s[0]);
    puts(s);
    }
    void string_length(char *p){
        int l = 0;

    for(i=0;*(p+i)!='\0';i++){
        l = i+1;

    }
printf("length of string is %d",l);
    }
    void string_reverse(char *p){
         int l = 0;

    for(i=0;*(p+i)!='\0';i++){
        l = i+1;

    }

        char t[10];

      for(i=0;i<=l/2;i++){
      t[i]= *(p+i);
      *(p+i) = *(p+l-i-1);
      *(p+l-i-1) = t[i];
      }



    }
