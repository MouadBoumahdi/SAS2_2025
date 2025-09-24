#include <stdio.h>

int main() {
    int i,n;
    int tableau[n];
    int newtableau[n];
        
    printf("Entrer le nombre des elements : ");
    scanf("%d",&n);
    
    for(i = 0 ;i<n;i++){
        printf("entrer le nombre: ");
        scanf("%d",&tableau[i]);
        newtableau[i] = tableau[i];
    }
    
   
    int count;
    for(i = 0;i<n;i++){
        if(tableau[i] == newtableau[i]){
            count = 1;
        }else{
            count = 0;
        }
    }

    printf("First tableau: ");
    for(i = 0 ;i<n;i++){
        printf("%d, ",tableau[i]);
    } 
    
    printf("New tableau: ");
    for(i = 0 ;i<n;i++){
        printf("%d, ",newtableau[i]);
    } 
    
}