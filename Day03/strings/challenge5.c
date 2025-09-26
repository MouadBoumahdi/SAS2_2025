#include <stdio.h>
#include <string.h>

int main() {
    
    // inversion de chaine
    char mot[] = "Mouad";
    int size = strlen(mot);

    for(int i = size - 1;i>=0;i--){
        
        printf("%c",mot[i]);
    }
    

}