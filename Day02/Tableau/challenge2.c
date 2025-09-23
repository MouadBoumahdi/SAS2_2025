// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    int tableau[n];
    
    printf("donner le nombre des elements: ");
    scanf("%d",&n);
    
    for(int i = 0;i<n;i++){
        printf("entrer le nombre %d ;",i+1);
        scanf("%d",&tableau[i]);
    }
    
    for(int i =0;i<n;i++){
        printf("%d",tableau[i]);
    }
}