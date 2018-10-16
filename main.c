#include <stdio.h>
#include <stdlib.h>
struct cubelist complement(struct cubelist);
int binate(struct cubelist);
struct cubelist positivecofactor(struct cubelist,int);
struct cubelist negativecofactor(struct cubelist,int);
struct cubelist andd(struct cubelist,int );
struct cubelist and(struct cubelist,int);
struct cubelist or(struct cubelist,struct cubelist);
int z[20];
struct cubelist{
int u[20][20];
};
int l,m = 0;
struct cubelist c6,c5;
int i,k,j,ch,b,c,d;
struct cubelist a,cc;
int main()
{

FILE *fp;
fp = fopen("part1.pcn","r");


fscanf(fp,"%d %d",&b,&c);

printf("%d %d\n",b,c);




    for (i=0;i<c;i++){
       fscanf(fp,"%d",&d);
z[i] = d;

                for(k=0;k<d;k++){
                        fscanf(fp,"%d",&ch);
                        if(ch<0){
                          a.u[i][k] = 10;
                        }
                  else if(ch>0){
                    a.u[i][k] = 1;
                  }

                  printf("%d\t",a.u[i][k]);
                  }

for(j = d;j<b;j++){
    a.u[i][j] = 11;
    printf("%d \t",a.u[i][j]);
}
printf("\n");
}

fclose(fp);
cc = complement(a);
for(i=0;i<c;i++){
    for(j=0;j<b;j++){
        printf("%d\t",cc.u[i][j]);
    }
    printf("\n");
}
return 0 ;
}

struct cubelist complement(struct cubelist cube){

for(i=0;i<c;i++){
    for(j=0;j<b;j++){
        if(cube.u[i][j] == 0){
            m = m+1;
        }
    }
}
if(m >=((c*b)-b)){
for(i=0;i<c;i++){
    if(cube.u[i][j] == 10){
        cube.u[i][j] = 1;
    }
    else if(cube.u[i][j]==1){
            cube.u[i][j] = 10;

    }
    else if((cube.u[i][j]==11)){
        cube.u[i][j] = 0;
    }
    else{
        cube.u[i][j]=11;
    }
}
}
else{
l = binate(cube);
c5 = positivecofactor(cube,l);
c6 = negativecofactor(cube,l);
    struct cubelist p = complement(c5);
    struct cubelist n = complement(c6);
    p = and(p,l);
    n = andd(n,l);
    return (or(p,n));


}

}
struct cubelist positivecofactor(struct cubelist cube1,int q){
for(i=0;i<c;i++){

        if(cube1.u[i][q] == 10){
                for(j=0;j<b;j++){
            cube1.u[i][j] == 0;}}

    else if(cube1.u[i][q]== 1){
       cube1.u[i][q]==11;
    }
}
return cube1;

}
struct cubelist negativecofactor(struct cubelist cube2,int q){
for(i=0;i<c;i++){

        if(cube2.u[i][q] == 01){
                for(j=0;j<b;j++){
            cube2.u[i][j] == 0;}}

    else if(cube2.u[i][q]== 10){
       cube2.u[i][q]==11;
    }
}
return cube2;

}

int binate(struct cubelist cube3){
int g[20];
int largest,t;
for(j=0;j<b;j++){
        g[j] = 0;
    for(i=0;i<c;i++){
        if(cube3.u[i][j]==01){
            g[j] = g[j]+1;
        }
        else if(cube3.u[i][j] == 10){
            g[j]=g[j] + 1;
        }
    }
}
largest = g[0];
for(k=0;k<b;k++){
    if(g[k]>largest){
        largest=g[k];
        t=k;
    }

}
return t;
}

struct cubelist and(struct cubelist c7,int w){
    for(i=0;i<c;i++){
        c7.u[i][w]=01;
    }
return c7;
}
struct cubelist andd(struct cubelist c8,int w){
    for(i=0;i<c;i++){
        c8.u[i][w]=10;
    }
return c8;
}
struct cubelist or(struct cubelist c9,struct cubelist ca){
struct cubelist cb;
for(i=0;i<c;i++){
    for(j=0;j<b;j++){
     cb.u[i][j] = c9.u[i][j] + ca.u[i][j];
    }
}
return cb;
}





