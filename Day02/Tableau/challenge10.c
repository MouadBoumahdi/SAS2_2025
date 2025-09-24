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
    
    int recherche;
    printf("entrer l'element pour la recherche: ");
    scanf("%d",&recherche);
    
    
    int count=0;
    for(i = 0 ;i<n;i++){
        if(recherche == tableau[i]){
            count++;
            break;
        }
    }
    if(count>0){
        printf("L'element est present");
    }else{
        printf("absent");
    }
    
    
}