#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char mot1[] = "Mouad";
    char mot2[] = "Boumahdi";
    char concat[100];


// copy mouad in concat 
    strcpy(concat,mot1); 
// concat already = Mouad and after we add space " "
    strcat(concat," ");
// adding the last name
    strcat(concat,mot2);
    printf("%s",concat);
    

    
    

    return 0;
        

}