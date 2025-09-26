#include <stdio.h>

struct rectangle{
        int longueur;
        int largeur;
        int aire;
    };

    void aire(int a ,int b){
        printf("%d,%d",a+b);
    }
    

int main() {
    

    struct rectangle p = {100,200};
    p.aire = p.longueur*p.largeur;
    printf("Aire : %d",p.aire);
    
    return 0;   
}