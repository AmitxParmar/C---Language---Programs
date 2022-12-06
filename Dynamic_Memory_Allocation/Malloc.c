#include<stdio.h>
#include <_mingw.h>

#include<stdlib.h>
#define NULL (void *)

void main(){
    int size, *P, *table;
    printf("\n What should be the size of table \t");
    if(table=(int*)malloc(size *sizeof(int))==NULL){
        printf("\n Space Available \n");
        exit(1);
    }
    printf("\n Enter Values \n");
    for (p=table; p<table=size; p++)
    {
        scanf("%d",p);
    }
    for(p=table; p<table+size; p++)
    {
        printf("%d is stored at %u \n\n", *p,p);
    }
}