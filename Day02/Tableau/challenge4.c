#include <stdio.h>

void main() {
    int n;
    int tableau[n];
    
    printf("donner le nombre des elements: ");
    scanf("%d",&n);
    
    for(int i = 0;i<n;i++){
        printf("entrer le nombre %d ;",i+1);
        scanf("%d",&tableau[i]);
    }
    int max = 0;
    for(int i =0;i<n;i++){
        if(tableau[i]>max){
            max = tableau[i];
        }
    }
    printf("%d",max);
}