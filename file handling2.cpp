#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int i;
    FILE *fp;
    char s[100];
    
    fp = fopen("f1.txt","r");

    if(fp == NULL){
        printf("Could not create file"); 
    }else{

        while(fgets(s,sizeof(s),fp) != NULL){
            printf("%s",s);
        }

        fclose(fp); 
        
    }

   return 0;
}