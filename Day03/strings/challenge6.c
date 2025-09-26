// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    char c;
    char chaine[10];
    int count=0;
    
    printf("entrer un charactere : ");
    scanf("%c",&c);
    getchar();
    printf("entrer un chaine de charactere : ");
    scanf("%[^\n]",chaine);
    
    
    for(int i =0;i<strlen(chaine);i++){
        if(c == chaine[i]){
            count++;
        }
    }
    if(count>0){
        printf("%d",count);
    }
    
    
    
    
}