#include <stdio.h>

int main() {
    int i,n;
    printf("Entrer le nombre des elements : ");
    scanf("%d",&n);
    
    int tableau[n];

    
    
    for(i = 0 ;i<n;i++){
        printf("entrer le nombre: ");
        scanf("%d",&tableau[i]);
    }
    
    
    for(i = n-1 ;i>=0;i--){
        printf("%d, ",tableau[i]);
    }
}