#include <stdio.h>


int main(){
    
    char mot[100];
    printf("donner un mot : ");
    scanf("%[^\n]",mot);
    
    // affichage
    printf("Mot = %s",mot);
    return 0;
}