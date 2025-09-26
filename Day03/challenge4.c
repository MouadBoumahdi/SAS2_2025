#include <stdio.h>
#include <string.h>

int main() {
    char m1[10];
    char m2[10];
    
       printf("enter the password : ");
    fgets(m1,sizeof(m1),stdin);
        printf("Again : ");
    fgets(m2,sizeof(m2),stdin);
    
    m1[strcspn(m1,"\n")] = 0;
    m2[strcspn(m2,"\n")] = 0;
    
    if(strcmp(m1,m2)==0){
        printf("Twins");
    }else{
        printf("Not the same");
    }
    
}