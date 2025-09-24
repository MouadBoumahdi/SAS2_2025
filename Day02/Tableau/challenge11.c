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
    
    int valeurremplacer ;
    printf("donner la valeur remplacer: ");
    scanf("%d",&valeurremplacer);
    
    int nouvellevaleur;
    printf("entrer la nouvelle valeur: ");
    scanf("%d",&nouvellevaleur);
    
    
     printf("table :");
    for(i =0;i<n;i++){
        printf("%d, ",tableau[i]);
    }
    
    for(i = 0;i<n;i++){
        if(valeurremplacer == tableau[i]){
            tableau[i] = nouvellevaleur;
        }
    }
    
    printf("table with new values :");
    for(i =0;i<n;i++){
        printf("%d, ",tableau[i]);
    }
    
    
    
}