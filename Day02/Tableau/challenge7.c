#include <stdio.h>

void main() {
    int n;
    printf("donner le nombre des elements: ");
    scanf("%d",&n);
    int tableau[n];


    
    for(int i = 0;i<n;i++){
        printf("entrer le nombre %d ;",i+1);
        scanf("%d",&tableau[i]);
    }
     
     
     int temp;   
    for(int i =0 ;i<n-1;i++){
        for(int j = 1;j<n;j++){
            if(tableau[i]>tableau[j]){
                temp = tableau[i];
                tableau[i] = tableau[j];
                tableau[j] = temp;
            }
        }
    }
    for(int i = 0;i<n;i++){
        printf("%d\n",tableau[i]);
    }
    

    

}