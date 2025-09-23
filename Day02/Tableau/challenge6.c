#include <stdio.h>

void main() {
    int n;
    int tableau[n];
    int factoriel;
    printf("donner la factoriel: ");
    scanf("%d",&factoriel);
    
    printf("donner le nombre des elements: ");
    scanf("%d",&n);
    
    for(int i = 0;i<n;i++){
        printf("entrer le nombre %d ;",i+1);
        scanf("%d",&tableau[i]);
    }
    int multiplication = 0;
    for(int i =0;i<n;i++){
        multiplication = factoriel * tableau[i];
        printf("%d\n",multiplication);
    }
}