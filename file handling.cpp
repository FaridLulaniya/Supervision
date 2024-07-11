#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    int i;
    FILE *fp;
    char s[100];

    fp = fopen("f1.txt","a");


    if(fp == NULL){
        printf("Could not create file");
    }else{

        printf("Enter : ");

        gets(s); 

        fputs(" ",fp);

        fputs(s,fp); 

        fclose(fp); 

        printf("Data have written");

    }

   return 0;
}